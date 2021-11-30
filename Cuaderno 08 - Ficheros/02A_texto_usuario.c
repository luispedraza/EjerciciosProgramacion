/*
 * Programa que crea un archivo e introduce el texto
 * que el usuario introduce por teclado
*/

#include <stdio.h>

#define DEFAULT_FILE_NAME "02_archivo.txt"
#define MAX_CHAR 1000   // maxima longitud de la cadena

int main() {
    char texto[MAX_CHAR];   // Contiene el texto que introduce el usuario.
    FILE *pf = fopen(DEFAULT_FILE_NAME, "a+");
    if (!pf) {
        printf("ERROR: No se ha podido abrir el archivo\n");
        return -1;  // abortamos el programa
    }
    printf("Introduzca el texto que quiere almacenar :\n");
    fgets(texto, MAX_CHAR, stdin);
    fputs(texto, pf);
    // Un mensaje de confirmacion:
    printf("Se ha almacenado la cadena %s en el archivo %s",
           texto,
           DEFAULT_FILE_NAME);

    fclose(pf);
    return 0;
}