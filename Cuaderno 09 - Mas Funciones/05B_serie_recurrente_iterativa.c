/*
 * Este programa calcula los términos de la serie recurrente:
 *
 * a_n = (2 * a_n-1 - a_n-2) / (a_n-1 + a_n-2)
 * En este caso no empleamos recursividad, sino una solucion iterativa
 */

#include <stdio.h>

/**
 * @param a_menos1: termino a_(n-1)
 * @param a_menos1: termino a_(n-2)
 * @return termino a_n
 */
float termino_n(float a_menos1, float a_menos2);

int main() {
    int n = 10; // Numero de terminos que calcularemos
    float a0, a1; // dos primeros valores de la serie
    float an;   // almacena cada elemento de la serie
    printf("Valor el elemento 0: ");
    scanf(" %f%*c", &a0);
    printf("Valor el elemento 1: ");
    scanf(" %f%*c", &a1);
    for (int i = 0; i < n; i++) {
        printf("elemento %d: ", i);
        if (i == 0) {
            an = a0;
        } else if (i == 1) {
            an = a1;
        } else {
            an = termino_n(a1, a0);
            a0 = a1;
            a1 = an;
        }
        printf("%.2f\n", an);
    }
    return 0;
}

float termino_n(float a_menos1, float a_menos2) {
    float numerador = 2 * a_menos1 - a_menos2;
    float denominador = a_menos1 + a_menos2;
    return numerador / denominador;
}