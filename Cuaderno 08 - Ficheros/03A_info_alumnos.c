/*
 * Programa que escribe y lee información de alumnos en un fichero
 * formato: texto
 */
#include <stdio.h>

#define NOMBRE_ARCHIVO "03_alumnos.txt"
#define FORMATO_ESCRITURA "%s;%s;%d;%.2f\n"     // Formato para escribir registros
#define FORMATO_LECTURA "%[^;];%[^;];%d;%f\n"  // Formato para leer registros, descartando \n final
#define SIZE_STRING 40

typedef struct {
    char nombre[SIZE_STRING];
    char apellidos[SIZE_STRING];
    int curso;
    float nota;
} TAlumno;

/** Función que permite al usuario introducir información de alumnos
 * @return Un objeto alumno con la información recopilada.
 */
TAlumno inputAlumno() {
    TAlumno alumno;
    printf("Se solicitan los datos del alumno: \n");
    printf("Introduzca el nombre del alumno: ");
    scanf("%[^\n]%*c", alumno.nombre);
    printf("Introduzca los apellidos del alumno: ");
    scanf("%[^\n]%*c", alumno.apellidos);
    printf("Introduzca el curso del alumno: ");
    scanf("%i", &alumno.curso);
    printf("Introduzca la calificación del alumno: ");
    scanf("%f", &alumno.nota);
    return alumno;
}

/**
 * Imprime en pantalla la información de un alumno
 * @param alumno
 */
void outputAlumno(TAlumno *alumno) {
    printf("Apellidos, Nombre: %s, %s\n", alumno->apellidos, alumno->nombre);
    printf("Curso: %d\n", alumno->curso);
    printf("Calificación: %.2f\n", alumno->nota);
    printf("================================\n");
}

/**
 * Función que lee información de los alumnos desde un fichero
 * @param file: el archivo donde se cuentra la información
 */
void leerAlumnos(FILE *file) {
    TAlumno alumno;
    while (!feof(file)) {
        fscanf(file, FORMATO_LECTURA,
               alumno.nombre,
               alumno.apellidos,
               &alumno.curso,
               &alumno.nota);
        outputAlumno(&alumno);
    }
}

void leerAlumnosBien1(FILE *file) {
    TAlumno alumno;
    while (fscanf(file, FORMATO_LECTURA,
                  alumno.nombre,
                  alumno.apellidos,
                  &alumno.curso,
                  &alumno.nota) == 4) {
        outputAlumno(&alumno);
    }
}

void leerAlumnosBien2(FILE *file) {
    TAlumno alumno;
    char buffer[1024];
    while (fgets(buffer, 1024, file)) {
        sscanf(buffer, FORMATO_LECTURA,
               alumno.nombre,
               alumno.apellidos,
               &alumno.curso,
               &alumno.nota);
        outputAlumno(&alumno);
    }
}

/**
 * Función que guarda información de un alumno en un fichero
 * @param alumno: puntero a una estructura de alumno con información
 * @param file: archivo en el que se cuarda la información
 */
void guardarAlumno(TAlumno *alumno, FILE *file) {
    fprintf(file, FORMATO_ESCRITURA,
            alumno->nombre,
            alumno->apellidos,
            alumno->curso,
            alumno->nota);
}

/**
 * Función que muestra un menú al usuario con las opciones del programa.
 * @return 1 (insertar alumnos) o 2 (leer el archivo de datos completo)
 */
int menu() {
    int seleccion = 0;
    printf("Seleccione una opción:\n");
    printf("1: Insertar un registro de alumno en el fichero %s\n", NOMBRE_ARCHIVO);
    printf("2: Consultar los registros almacenados en el fichero %s\n", NOMBRE_ARCHIVO);
    scanf("%i%*c", &seleccion); // El símbolo "%*c" descarta el último caracter, que es un retorno de carro.
    switch (seleccion) {
        case 1:
            printf("Ha seleccionado introducir un nuevo registro.\n");
            break;
        case 2:
            printf("Ha seleccionado leer la información contenida en el archivo.\n");
            break;
        default:
            printf("No se reconoce la opción seleccionada\n");
    }
    return seleccion;
}

int main(int argc, const char *argv[]) {
    FILE *archivo;
    int seleccion = menu();
    if (seleccion == 1) {
        archivo = fopen(NOMBRE_ARCHIVO, "a+");
        if (archivo == NULL) {
            printf("No se ha podido abrir el archivo\n");
            return -1;
        }
        TAlumno alumno = inputAlumno();
        guardarAlumno(&alumno, archivo);
    } else if (seleccion == 2) {
        archivo = fopen(NOMBRE_ARCHIVO, "r");
        if (archivo == NULL) {
            printf("No se ha podido abrir el archivo\n");
            return -1;
        }
        leerAlumnos(archivo);
    }
    fclose(archivo);
    return 0;
}
