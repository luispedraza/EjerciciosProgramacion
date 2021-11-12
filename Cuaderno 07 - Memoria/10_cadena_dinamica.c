
#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_SIZE 10

int main() {
    int c;
    int n_char = 0;                     // caracteres introducidos
    int current_size = DEFAULT_SIZE;    // tamanio actual de la cadena
    char *cadena = (char *) malloc(current_size * sizeof(char));
    puts("Introduce el texto que deseas almacenar: \n");
    do {
        c = getchar();
        cadena[n_char] = c;
        n_char++;
        if (n_char == current_size - 1) {
            // Lo siguiente es una funcion de traza
            // que te puede ayudar a ver si el puntero se reubica:
            printf("cadena apunta a: %p\n", cadena);
            // necesitaremos más espacio
            current_size += DEFAULT_SIZE;
            cadena = (char *) realloc(cadena, current_size * sizeof(char));
        }
    } while (c != '\n');
    printf("Resultado: %s", cadena);
    // Liberamos la memoria utilizada:
    free (cadena);
    return 0;
}