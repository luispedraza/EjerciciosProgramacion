/**
 * Programa que lee una matriz de 3x3 y calcula la suma de cada fila
 * y de cada columna dejando estos resultados en dos arrays,
 * uno con la suma de las filas y otro con la de las columnas.
 * Misma solución que en el caso 02A pero haciendo las sumas en un solo bucle.
 */
#include <stdio.h>

#define DIM 3

int main() {
    int matriz[DIM][DIM];               // Matriz que almacena los valores
    int suma_filas[DIM] = {0, 0, 0};    // Suma de las filas
    int suma_columnas[DIM] = {0, 0, 0}; // Suma de las columnas
    int i, j;
    // Solicitamos los datos de la matriz:
    printf("Introduzca la matriz:\n");
    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            printf("Elemento en la posicion (%d, %d): ", i, j);
            scanf("%d%*c", &matriz[i][j]);
        }
    }
    // Sumamos las filas y las columnas:
    for (i = 0; i < DIM; i++) {
        for (j = 0; j < DIM; j++) {
            suma_filas[i] += matriz[i][j];
            suma_columnas[j] += matriz[i][j];
        }
    }

    // Mostramos el resultado:
    printf("La suma de las filas es:\n");
    for (i = 0; i < DIM; i++) {
        printf("%d\n", suma_filas[i]);
    }
    printf("La suma de las columnas es:\n");
    for (i = 0; i < DIM; i++) {
        printf("%d\t", suma_columnas[i]);
    }

    return 0;
}