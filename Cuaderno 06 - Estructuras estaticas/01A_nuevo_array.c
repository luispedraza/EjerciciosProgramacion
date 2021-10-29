/**
 * Implementa un programa que introduzca los valores de un array
 * mediante un bucle que solicita datos por teclado al usuario.
 */
#include <stdio.h>
#define NUM_ELEMENTOS 5  // Tamaño del array de valores


int main() {
    int array[NUM_ELEMENTOS];
    int indice;
    for (indice=0; indice<NUM_ELEMENTOS; indice++) {
        printf ("Introduzca el valor en posicion %d: ", indice);
        scanf ("%d%*c", &array[indice]);
    }
    // Luego, podemos mostrar el vector introducido en pantalla:
    printf ("Este es el vector almacenado:\n");
    for (indice=0; indice<NUM_ELEMENTOS; indice++) {
        printf ("%d", array[indice]);
        printf (indice == NUM_ELEMENTOS-1 ? "\n" : ", ");
    }

    return 0;
}