/*
 * Programa que escribe info de alumnos en un fichero
 * formato: texto
 * Esta solución es igual a la anterior, pero
 * define funciones específicas.
 * El código queda mejor estructurado y más legible.
 */
#include <stdio.h>

#define NOMBRE_ARCHIVO "alumnos.txt"
#define FORMATO_ESCRITURA "%s;%s;%d;%.2f\n"     // Formato para escribir registros
#define SIZE_STRING 40

typedef struct {
    char nombre[SIZE_STRING];
    char apellidos[SIZE_STRING];
    int edad;
    float nota;
} TAlumno;  // esta estructura almacena info de un alumno

/** Función que permite al usuario introducir info de alumnos
 * @return Un objeto alumno con la info recopilada.
 */
TAlumno inputAlumno() {
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

/**
 * Función que guarda info de un alumno en un fichero
 * @param alumno: puntero a una estructura de alumno con información
 * @param file: archivo en el que se cuarda la información
 */
void guardarAlumno(TAlumno *alumno, FILE *file) {
    fprintf(file, FORMATO_ESCRITURA,
            alumno->nombre,
            alumno->apellidos,
            alumno->edad,
            alumno->nota);
}

int main() {
    FILE *archivo;
    char seguir;
    archivo = fopen(NOMBRE_ARCHIVO, "a+");
    TAlumno alumno;

    if (archivo == NULL) {
        printf("No se ha podido abrir el archivo\n");
        return -1;
    }
    do {
        alumno = inputAlumno();
        guardarAlumno(&alumno, archivo);
        printf ("Quieres introducir otro registro? S/N: ");
        scanf(" %c&*c", &seguir);
    } while (seguir == 'S' || seguir == 's');

    fclose(archivo);
    return 0;
}
