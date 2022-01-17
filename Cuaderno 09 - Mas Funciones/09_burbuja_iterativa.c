/*
 * Ejemplo de algoritmo de ordenacion
 * Metodo: burbuja con recursividad
 */
#include <stdio.h>

void ordena_burbuja_recursiva(int v[], int n);

int main() {
    int i;
    int vector[20] = {1, -3, 19, 14, 3, 100, 50, 32, 35, 46,
                      12, 145, 23, 45, 23, 20, 14, -4, 87, 2};
    printf("\nVector original: \n");
    for (i = 0; i < 20; i++) printf("%d, ", vector[i]);
    ordena_burbuja_recursiva(vector, 20);
    printf("\nVector ordenado: \n");
    for (i = 0; i < 20; i++) printf("%d, ", vector[i]);
    return 0;
}


void ordena_burbuja_recursiva(int v[], int n) {
    // "Burbujea" sobre los n primeroe elementos del vector
    int i, j;
    int aux;

    if (n == 1) return; // nada que ordenar, caso base

    for (j = 0; j < n - 1; j++) {
        // comparacion del par:
        if (v[j] > v[j + 1]) {
            // intercambio (burbujeo)
            aux = v[j];
            v[j] = v[j + 1];
            v[j + 1] = aux;
        }
    }
    // Llamada recursiva
    ordena_burbuja_recursiva(v, n - 1);
}
