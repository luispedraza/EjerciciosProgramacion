/**
 * Programa que genera una serie de numeros
 * naturales, decrementando de dos en dos,
 * a partir de un valor inicial.
 */
#include <stdio.h>

/**
 * Funcion recursiva que determina la serie
 * @param x Valor del termino
 * @param n Posicion del termino en la serie
 */
void serie_decreciente(int x, int n) {
    if (x <= 0) return;
    printf("[%d]: %d, ", n, x);
    serie_decreciente(x-2, n+1);
}

int main() {
    int v;
    printf ("Introduzca un valor positivo entero: ");
    scanf ("%d", &v);
    serie_decreciente(v, 0);
    return 0;
}