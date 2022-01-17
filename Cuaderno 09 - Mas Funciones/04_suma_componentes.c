/**
* Programa que usa una funcion recursiva
 * para sumar las componentes de un vector
*/

#include <stdio.h>
#include <stdlib.h>

int suma_componentes(int vector[], int tam);

int main() {
    int *vector;    // El vector de enteros
    int i, tam;
    printf("Introduce el vector:\n");
    printf("Cuantos elementos tiene el vector: \n");
    scanf(" %d%*c", &tam);
    vector = calloc(tam, sizeof(int));

    for (i = 0; i < tam; i++) {
        printf("Introduzca el elemento %d: \n", i);
        scanf(" %d%*c", &vector[i]);
    }
    printf("La suma de los numeros del vector es: %d \n",
           suma_componentes(vector, tam));
    return 0;
}

int suma_componentes(int vector[], int tam) {
    if (tam == 1) {
        // Caso trivial, con un vector de un único elemento
        return vector[0];
    }
    return (vector[tam - 1] + suma_componentes(vector, tam - 1));
}
