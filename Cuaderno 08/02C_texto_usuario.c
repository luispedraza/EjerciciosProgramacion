/*
 * Programa que crea un archivo e introduce el texto que el usuario introduce por teclado
 * Mejorado con la posibilidad de que el usuario defina el nombre del archivo
*/

#include <stdio.h>
#include <string.h>
#define DEFAULT_FILE_NAME "02_archivo.txt"
#define MAX_CHAR 1000

int main (int argc, char **argv) {
    char texto[MAX_CHAR];   // Contiene el texto que introduce el usuario.
    FILE * pf;
    int contador_linea = 1;
    if (argc < 2) {
        printf ("Debe indicar como parámetro un nombre de archivo\n.");
        return -1;
    }
    pf = fopen (argv[1], "a+");
    if (!pf) {
        printf ("ERROR: No se ha podido abrir el archivo\n");
        return -1;
    }
    do {
        printf ("Introduzca la línea %d de texto (intro para salir):\n", contador_linea);
        fgets (texto, MAX_CHAR, stdin);
        if (strlen(texto) > 1) {
            // con esto evitamos introducir líneas en blanco en el archivo
            fputs(texto, pf);
        } else {
            break;
        }
        contador_linea++;
    } while (1);
    fclose (pf);

    return 0;
}