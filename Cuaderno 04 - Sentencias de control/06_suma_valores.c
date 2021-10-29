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
    int suma = 0, n = 0;
    for (n = INICIAL; n < 30; n += INCREMENTO) {
        printf("%d, ", n);
        if (n%2 == 0) suma += n;
    }
    printf ("\nLa suma solicitada es: %d", suma);
    return 0;
}