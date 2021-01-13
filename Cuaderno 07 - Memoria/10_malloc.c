/*
 * Programa que crea un puntero y le asigna memoria con la función malloc
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main() {
    int *puntero = NULL;
    int i = 0;  // Contador
    puntero = malloc (SIZE * sizeof(int));
    if (puntero == NULL) {
        printf ("No se ha podido reservar espacio en memoria\n");
        return -1;
    } else {
        // Mostramos el contenido de la memoria reservada. Generalmente serán ceros
        for (i=0; i<SIZE;i++) printf ("%d", *(puntero+1));
        free(puntero);   // Liberamos la memoria asignada con malloc
    }
}