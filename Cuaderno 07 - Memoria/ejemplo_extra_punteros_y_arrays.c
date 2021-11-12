/* Programa en C que muestra el uso de matrices de punteros
*/

#include <stdio.h>

#define NUM_ELEMENTOS 10

int mostrar_array(int array[][NUM_ELEMENTOS], int);    // Función de ayuda para mostrar una matriz cuadrada

int main() {
    int *punteros[NUM_ELEMENTOS];    // Vector de punteros a números enteros
    int matriz[NUM_ELEMENTOS][NUM_ELEMENTOS];    // Matriz de enteros
    int i, j;  // Contadores
    // Inicializamos valores en la matriz, y los punteros del vector en un solo bucle:
    for (i = 0; i < NUM_ELEMENTOS; i++) {
        for (j = 0; j < NUM_ELEMENTOS; j++) {
            matriz[i][j] = (i+1) * (j+1);
        }
        punteros[i] = &matriz[i][i];    // Apunta al elemento de la diagonal
    }
    // Estado actual de la matriz:
    printf ("Estado actual de la matriz: \n");
    mostrar_array(matriz, NUM_ELEMENTOS);
    // Asignamos cero a la diagonal principal empleando el vector de punteros:
    for (i=0; i<NUM_ELEMENTOS; i++) *punteros[i] = 0;
    // Estado final de la matriz:
    printf ("Estado final de la matriz: \n");
    mostrar_array(matriz, NUM_ELEMENTOS);
    return 0;
}

int mostrar_array(int array[][NUM_ELEMENTOS], int dim) {
    // NOTA: Sobre paso de arrays a funciones leer estos documentos:
    // http://fpsalmon.usc.es/genp/doc/cursos/C++/funciones/pasarArrays.html
    // https://es.stackoverflow.com/questions/314536/c%C3%B3mo-usar-un-array-bidimensional-como-variable-de-una-funci%C3%B3n-en-c
    int i, j;
    for (i = 0; i < dim; i++) {
        for (j = 0; j < dim; j++) {
            printf ("%d\t", array[i][j]);
        }
        printf ("\n");
    }
    return 0;
}