/**
 * Programa que genera una serie de numeros
 * naturales, decrementando de dos en dos,
 * a partir de un valor inicial.
 */
#include <stdio.h>

void serie_decreciente(int x) {
    if (x <= 0) return;
    printf("%d, ", x);
    serie_decreciente(x-2);
}

int main() {
    int v;
    printf ("Introduzca un valor positivo entero: ");
    scanf ("%d", &v);
    serie_decreciente(v);
    return 0;
}