/*
 * Programa que escribe y lee información de alumnos en un fichero
 * formato: binario
 */
#include <stdio.h>

#define NOMBRE_ARCHIVO "03_alumnos.bin"
#define SIZE_STRING 40

typedef struct {
    char nombre[SIZE_STRING];
    char apellidos[SIZE_STRING];
    int edad;
    float nota;
} TAlumno;

/* Muestra un alumno en pantalla */
void muestraAlumno(TAlumno *alumno) {
    printf("Apellidos, Nombre: %s, %s\n", alumno->apellidos, alumno->nombre);
    printf("Edad: %d\n", alumno->edad);
    printf("Nota: %.2f\n", alumno->nota);
    printf("================================\n");
}

/* Adquiere info de un alumno */
TAlumno pideAlumno() {
    TAlumno alumno;
    printf("Se solicitan los datos del alumno: \n");
    printf(" Introduzca el nombre del alumno: ");
    scanf(" %[^\n]%*c", alumno.nombre);
    printf(" Introduzca los apellidos del alumno: ");
    scanf(" %[^\n]%*c", alumno.apellidos);
    printf(" Introduzca la edad del alumno: ");
    scanf(" %i%*c", &alumno.edad);
    printf(" Introduzca la nota del alumno: ");
    scanf(" %f%*c", &alumno.nota);
    return alumno;
}

/* Lee todos los alumnos del archivo */
void leeAlumnos(FILE *file) {
    TAlumno alumno;
    rewind(file);   // Esto es importante, porque
                    // hemos abierto en modo a+
    while (fread(&alumno, sizeof (TAlumno), 1, file)) {
        muestraAlumno(&alumno);
    }
}

/* Guarda un alumno en el archivo */
void escribeAlumno(TAlumno *alumno, FILE *file) {
    fwrite(alumno, sizeof (TAlumno), 1, file);
}

/* Menu principal */
int menu() {
    int op;
    printf ("Seleccione una opcion: \n");
    printf (" 1. Mostrar contenido del fichero.\n");
    printf (" 2. Insertar nuevo registro al final.\n");
    printf (" 3. Salir del programa.\n");
    printf (" Opcion [1, 2, 3]: ");
    scanf (" %i%*c", &op);
    return op;
}

int main() {
    FILE *archivo;
    int opcion;
    TAlumno alumno;
    archivo = fopen(NOMBRE_ARCHIVO, "a+b");
    if (archivo == NULL) {
        printf("No se ha podido abrir el archivo\n");
        return -1;
    }
    do {
        opcion = menu();
        switch (opcion) {
            case 1:
                leeAlumnos(archivo);
                break;
            case 2:
                alumno = pideAlumno();
                escribeAlumno(&alumno, archivo);
                break;
        }
    } while (opcion != 3);

    fclose(archivo);
    return 0;
}
