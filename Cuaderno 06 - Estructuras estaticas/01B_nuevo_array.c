/**
 * Implementa un programa que introduzca los valores de un array
 * mediante un bucle que solicita datos por teclado al usuario.
 * En este caso, empleando dos funciones.
 */
#include <stdio.h>
#define NUM_ELEMENTOS 5  // Tamaño del array de valores

void leer_vector(int v[], int num);
void mostrar_vector(int v[], int num);

int main() {
    int array[NUM_ELEMENTOS];
    leer_vector(array, NUM_ELEMENTOS);
    mostrar_vector(array, NUM_ELEMENTOS);
    return 0;
}

void leer_vector(int v[], int num) {
    int indice;
    for (indice=0; indice<num; indice++) {
        printf ("Introduzca el valor en la posicion %d: ", indice);
        scanf ("%d%*c", &v[indice]);
    }
}
void mostrar_vector(int v[], int num) {
    int indice;
    printf ("Este es el vector almacenado:\n");
    for (indice=0; indice<num; indice++) {
        printf ("%d", v[indice]);
        printf ((indice == num-1) ? "\n" : ", ");
    }
}