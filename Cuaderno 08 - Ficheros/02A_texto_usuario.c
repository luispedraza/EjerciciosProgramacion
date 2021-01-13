/*
 * Programa que crea un archivo e introduce el texto que el usuario introduce por teclado
*/

#include <stdio.h>

#define DEFAULT_FILE_NAME "02_archivo.txt"
#define MAX_CHAR 1000

int main(int argc, char **argv) {
    char texto[MAX_CHAR];   // Contiene el texto que introduce el usuario.
    FILE *pf = fopen(DEFAULT_FILE_NAME, "a+");
    if (!pf) {
        printf("ERROR: No se ha podido abrir el archivo\n");
        return -1;
    }
    printf("Introduzca el texto que quiere almacenar en el archivo (intro para salir):\n");
    fgets(texto, MAX_CHAR, stdin);
    fputs(texto, pf);

    fclose(pf);

    return 0;
}