/**
 * Programa que lee una matriz de 3x3 y calcula la suma de cada fila
 * y de cada columna dejando estos resultados en dos arrays,
 * uno con la suma de las filas y otro con la de las columnas.
 * Misma solución que en el caso 02B pero usando funciones.
 */
#include <stdio.h>

#define DIM 3

/**
 * Funcion que lee los datos de la matriz
 * @param array : contiene los datos introducidos
 */
void pide_array(int array[][DIM]) {
    printf("Introduzca la matriz:\n");
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            printf("Elemento en (%d, %d): ", i, j);
            scanf("%d%*c", &array[i][j]);
        }
    }
}

/**
 * Suma los valores de una matriz
 * @param array : matriz que contiene los datos
 * @param filas : vector que contiene sumas de filas
 * @param columnas : vector que contiene sumas de columnas
 */
void sumar_filas_columnas(int array[][DIM], int filas[], int columnas[]) {
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            filas[i] += array[i][j];
            columnas[j] += array[i][j];
        }
    }
}

/**
 * funcion que muestra un resultado
 * @param vector : vector que se quiere mostrar
 * @param fila : 1 si es vector fila, 0 si es vector columna
 */
void mostrar_vector(int vector[], int es_fila) {
    for (int i = 0; i < DIM; i++) {
        (es_fila == 1) ? printf("%d%c", vector[i], '\t') : printf("%d%c", vector[i], '\n');

        // ten en cuenta cómo se utilizan las comillas simples
        // para introducir el caracter de tabulacion
        // o el de nueva linea
    }
}

int main() {
    int matriz[DIM][DIM];               // Matriz que almacena los valores
    int suma_filas[DIM] = {0, 0, 0};    // Suma de las filas
    int suma_columnas[DIM] = {0, 0, 0}; // Suma de las columnas
    // Solicitamos los datos de la matriz:
    pide_array(matriz);
    // Sumamos las filas y las columnas:
    sumar_filas_columnas(matriz, suma_filas, suma_columnas);
    // Mostramos el resultado:
    printf("La suma de las filas es:\n");
    mostrar_vector(suma_filas, 0);      // como vector columna
    printf("La suma de las columnas es:\n");
    mostrar_vector(suma_columnas, 1);   // como vector fila
    return 0;
}