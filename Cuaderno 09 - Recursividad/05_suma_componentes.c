/**
* Programa que usa una funcion recursiva
 * para sumar las componentes de un vector
*/

#include <stdio.h>
#define NUM_MAX_ELEMENTOS 50

int suma_componentes(int vector[], int tam);

int main(int argc, const char *argv[]) {
    int vector[NUM_MAX_ELEMENTOS];
    int i, tam;
    printf("Introduce el vector:\n");
    printf("Cuantos elementos tiene el vector: \n");
    scanf("%d", &tam);
    for (i = 0; i < tam; i++) {
        printf("Introduzca el elemento %d: \n", i);
        scanf("%d", &vector[i]);
    }
    printf("La suma de los numeros del vector es: %d \n", suma(vector, tam));
    return 0;
}

int suma_componentes(int vector[], int tam) {
    if (tam == 0) {
        printf("%d \n", vector[0]);
        return vector[0];
    } else {
        printf("%d \n", vector[tam]);
        return (vector[tam] + suma(vector, tam - 1));
    }
    return 0;
}
