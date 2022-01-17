/*
 * Este programa calcula los términos de la serie recurrente:
 *
 * a_n = (2 * a_n-1 - a_n-2) / (a_n-1 + a_n-2)
 */

#include <stdio.h>

float serie(int n, float a0, float a1);

int main() {
    int n = 10; // Numero de terminos que calcularemos
    float a0, a1;
    printf ("Valor el elemento 0: ");
    scanf (" %f%*c", &a0);
    printf ("Valor el elemento 1: ");
    scanf (" %f%*c", &a1);
    for (int i = 0; i < n; i++) {
        printf ("elemento %d: ", i);
        printf ("%.2f\n", serie(i, a0, a1));
    }
    return 0;
}

float serie(int n, float a0, float a1) {
    if (n == 0) return a0; // caso trivial, elemento 0
    if (n == 1) return a1; // caso trivial, elemento 1
    float numerador = 2 * serie(n - 1, a0, a1) - serie(n - 2, a0, a1);
    float denominador = serie(n - 1, a0, a1) + serie(n - 2, a0, a1);
    return numerador / denominador;
}
