/*
Implementa un programa que muestre el uso de operaciones aritméticas con punteros
*/
#include <stdlib.h> // para utilizar calloc
#include <stdio.h>

#define NUM_ELEM 10

/**
 * Función que imprime en pantalla un array de enteros
 * @param p: puntero al primer elemento
 * @param numElementos: número de elementos
 */
void imprimeArray(int *p, int numElementos) {
    for (int i = 0; i < numElementos; i++) {
        printf("%d, ", *(p + i));
    }
    printf("\n");
}

int main() {
    int array_enteros[NUM_ELEM],
            entero,
            *pEnteroA,
            *pEnteroB;
    // Inicializo el array:
    for (int i = 0; i < NUM_ELEM; i++) array_enteros[i] = 0;
    imprimeArray(array_enteros, NUM_ELEM);    // Se muestra el array vacío
    // Asignamos punteros:
    pEnteroA = &array_enteros[0];   // Apunta al elmeneto 0
    pEnteroB = &array_enteros[5];   // Apunta al elemento 5
    // Modificamos valores:
    *pEnteroA = -2;
    *pEnteroB = -5;
    imprimeArray(array_enteros, NUM_ELEM);
    // Intercambiamos valores:
    entero = *pEnteroA;
    *pEnteroA = *pEnteroB;
    *pEnteroB = entero;
    imprimeArray(array_enteros, NUM_ELEM);
    // Incrementamos los valores siguientes a los apuntados por los punteros:
    *(pEnteroA + 1) += 1;
    *(pEnteroB + 1) += 1;
    imprimeArray(array_enteros, NUM_ELEM);
    // Reasignamos punteros:
    pEnteroA+=2;                    // Apunta al elemento 2;
    pEnteroB+=2;                    // Apunta al elemento 7;
    *pEnteroA = 50;
    *pEnteroB = 50;
    imprimeArray(array_enteros, NUM_ELEM);
    // Dos maneras de intrementar valores
    // Pre-incremento
    *pEnteroA = ++(*pEnteroB);
    imprimeArray(array_enteros, NUM_ELEM);
    // Post-intremento (Después de la asignación)
    *pEnteroA = (*pEnteroB)++;
    imprimeArray(array_enteros, NUM_ELEM);

    return 0;
}