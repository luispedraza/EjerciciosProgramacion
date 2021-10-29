/**
 * Programa que copia un array en otro
 */

#include <stdio.h>      // Aquí está declarada printf
#include <stdlib.h>     // Aquí está declarada rand y srand
#include <time.h>       // Aquí está declarada time

#define N_FILAS 3
#define N_COLUMNAS 5

// Función que genera un array aleatorio
void generateArray(int array[][N_COLUMNAS]) {
    int i, j;
    srand(time(NULL));  // Inicializa (semilla) el generador de números aleatorios
    // Creamos un array aleatorio:
    for (i = 0; i < N_FILAS; i++) {
        for (j = 0; j < N_COLUMNAS; j++) {
            array[i][j] = rand() % 100;
        }
    }
}
// Función que copia un array en otro
void copyArray(int origen[][N_COLUMNAS], int destino[][N_COLUMNAS]) {
    int i, j;
    // Copiamos el array A en el array B:
    for (i = 0; i < N_FILAS; i++) {
        for (j = 0; j < N_COLUMNAS; j++) {
            destino[i][j] = origen[i][j];
        }
    }
}
// Función que muestra un array en pantalla
void showArray(int array[][N_COLUMNAS]) {
    int i, j;
    for (i = 0; i < N_FILAS; i++) {
        for (j = 0; j < N_COLUMNAS; j++) {
            printf ("%d\t", array[i][j]);
        }
        printf ("\n");
    }
}
int main() {
    int array_A[N_FILAS][N_COLUMNAS], array_B[N_FILAS][N_COLUMNAS];
    generateArray(array_A);
    copyArray(array_A, array_B);
    printf ("El array original es (array A):\n");
    showArray(array_A);
    printf ("El array copiado es (array B):\n");
    showArray(array_B);
    return 0;
}