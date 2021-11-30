/*
 * Programa que escribe info de alumnos en un fichero
 * formato: texto
 */
#include <stdio.h>

#define NOMBRE_ARCHIVO "03_alumnos.txt"
#define FORMATO_ESCRITURA "%s;%s;%d;%.2f\n"     // Formato para escribir registros
#define SIZE_STRING 40

typedef struct {
    char nombre[SIZE_STRING];
    char apellidos[SIZE_STRING];
    int edad;
    float nota;
} TAlumno;  // esta estructura almacena info de un alumno


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
        // Obtenemos info del alumno
        printf("Se solicitan los datos del alumno: \n");
        printf(" Introduzca el nombre del alumno: ");
        scanf(" %[^\n]%*c", alumno.nombre);
        printf(" Introduzca los apellidos del alumno: ");
        scanf(" %[^\n]%*c", alumno.apellidos);
        printf(" Introduzca la edad del alumno: ");
        scanf(" %i%*c", &alumno.edad);
        printf(" Introduzca la nota del alumno: ");
        scanf(" %f%*c", &alumno.nota);
        // Guardamos el alumno
        fprintf(archivo, FORMATO_ESCRITURA,
                alumno.nombre,
                alumno.apellidos,
                alumno.edad,
                alumno.nota);
        // Preguntamos si se desea seguir
        printf ("Quieres introducir otro registro? S/N: ");
        scanf(" %c&*c", &seguir);
    } while (seguir == 'S' || seguir == 's');

    fclose(archivo);
    return 0;
}
