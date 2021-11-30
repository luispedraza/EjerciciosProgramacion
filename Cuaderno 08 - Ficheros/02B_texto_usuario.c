/*
 * Programa que crea un archivo e introduce el texto
 * que el usuario introduce por teclado.
 * Mejorado permitiendo introducir varias líneas de texto.
*/

#include <stdio.h>
#include <string.h> // para manipulación de cadenas de texto

#define DEFAULT_FILE_NAME "02_archivo.txt"
#define MAX_CHAR 1000

int main () {
    char texto[MAX_CHAR];   // Contiene el texto que introduce el usuario.
    FILE * pf = fopen (DEFAULT_FILE_NAME, "a+");
    int contador_linea = 1;
    if (!pf) {
        printf ("ERROR: No se ha podido abrir el archivo\n");
        return -1;
    }
    do {
        printf ("Introduzca una linea de texto [%d]:\n", contador_linea);
        fgets (texto, MAX_CHAR, stdin);
        fputs (texto, pf);
        contador_linea++;
    } while (strlen(texto) > 1);    // hasta que el usuario pulsa solo intro
    fclose (pf);

    return 0;
}