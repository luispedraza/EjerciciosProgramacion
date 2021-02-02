/**
 * Programa que genera vaores de dos en dos, entre el 2 y
 * un máximo menor que 30.
 * Calcula la suma de los valores que sin divisibles por 2.
 */

#include <stdio.h>

#define INICIAL 2
#define FINAL 30
#define INCREMENTO 2

int main() {
    int suma = 0, i = 0;
    for (i = INICIAL; i < 30; i += INCREMENTO) {
        printf("%d, ", i);
        if (i%2 == 0) suma += i;
    }
    printf ("\nLa suma solicitada es: %d", suma);
    return 0;
}