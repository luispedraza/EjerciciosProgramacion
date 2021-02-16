/**
 * Programa que copia un array en otro
 */

#include <stdio.h>      // Aquí está declarada printf
#include <stdlib.h>     // Aquí está declarada rand y srand
#include <time.h>       // Aquí está declarada time

#define N_FILAS 3
#define N_COLUMNAS 5

int main() {
    int array_A[N_FILAS][N_COLUMNAS], array_B[N_FILAS][N_COLUMNAS];
    int i, j;
    srand(time(NULL));  // Inicializa (semilla) el generador de números aleatorios
    // Creamos un array aleatorio:
    for (i = 0; i < N_FILAS; i++) {
        for (j = 0; j < N_COLUMNAS; j++) {
            array_A[i][j] = rand() % 100;
        }
    }
    // Copiamos el array A en el array B:
    for (i = 0; i < N_FILAS; i++) {
        for (j = 0; j < N_COLUMNAS; j++) {
            array_B[i][j] = array_A[i][j];
        }
    }
    // Mostramos los resultados:
    printf ("El array original es (array A):\n");
    for (i = 0; i < N_FILAS; i++) {
        for (j = 0; j < N_COLUMNAS; j++) {
            printf ("%d\t", array_B[i][j]);
        }
        printf ("\n");
    }
    printf ("El array copiado es (array B):\n");
    for (i = 0; i < N_FILAS; i++) {
        for (j = 0; j < N_COLUMNAS; j++) {
            printf ("%d\t", array_B[i][j]);
        }
        printf ("\n");
    }

    return 0;
}