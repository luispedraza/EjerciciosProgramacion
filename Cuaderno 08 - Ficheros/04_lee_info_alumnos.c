/*
 * Programa que lee info de alumnos desde un fichero
 * formato: texto
 */
#include <stdio.h>

#define NOMBRE_ARCHIVO "03_alumnos.txt"
#define FORMATO_LECTURA "%[^;];%[^;];%d;%f\n"  // Formato para leer registros, descartando \n final
#define SIZE_STRING 40

typedef struct {
    char nombre[SIZE_STRING];
    char apellidos[SIZE_STRING];
    int edad;
    float nota;
} TAlumno;

/**
 * Imprime en pantalla la información de un alumno
 * @param alumno
 */
void outputAlumno(TAlumno *alumno) {
    printf("Apellidos, Nombre: %s, %s\n", alumno->apellidos, alumno->nombre);
    printf("Edad: %d\n", alumno->edad);
    printf("Nota: %.2f\n", alumno->nota);
    printf("================================\n");
}

/**
 * Función que lee información de los alumnos desde un fichero
 * @param file: el archivo donde se cuentra la información
 */
void leerAlumnosA(FILE *file) {
    TAlumno alumno;
    while (!feof(file)) {
        fscanf(file, FORMATO_LECTURA,
               alumno.nombre,
               alumno.apellidos,
               &alumno.edad,
               &alumno.nota);
        outputAlumno(&alumno);
    }
}

void leerAlumnosB(FILE *file) {
    TAlumno alumno;
    while (fscanf(file, FORMATO_LECTURA,
                  alumno.nombre,
                  alumno.apellidos,
                  &alumno.edad,
                  &alumno.nota) == 4) {
        outputAlumno(&alumno);
    }
}

void leerAlumnosC(FILE *file) {
    TAlumno alumno;
    char buffer[1024];
    while (fgets(buffer, 1024, file)) {
        sscanf(buffer, FORMATO_LECTURA,
               alumno.nombre,
               alumno.apellidos,
               &alumno.edad,
               &alumno.nota);
        outputAlumno(&alumno);
    }
}

int main() {
    FILE *archivo;
    archivo = fopen(NOMBRE_ARCHIVO, "r");
    if (archivo == NULL) {
        printf("No se ha podido abrir el archivo\n");
        return -1;
    }
    leerAlumnosA(archivo);
    fclose(archivo);
    return 0;
}
