/*
 * Este programa calcula los términos de una serie recurrente y
 * su suma acumulada
 */

#include <stdio.h>
#include <math.h>

float serie(int n, float a0, float a1);

int main() {
    int n = 10; // Numero de terminos que calcularemos
    float a0, a1;
    float acumulado = 0;
    float an;
    printf("Valor el elemento 0: ");
    scanf(" %f%*c", &a0);
    printf("Valor el elemento 1: ");
    scanf(" %f%*c", &a1);
    for (int i = 0; i < n; i++) {
        an = serie(i, a0, a1);
        acumulado += an;
        printf("elemento %d: ", i);
        printf("%.2f\n", an);
    }
    printf("Suma acumulada: %.2f\n", acumulado);
    return 0;
}

float serie(int n, float a0, float a1) {
    if (n == 0) return a0; // caso trivial, elemento 0
    if (n == 1) return a1; // caso trivial, elemento 1
    float numerador = sqrt(serie(n - 1, a0, a1)) + 5;
    float denominador = serie(n - 2, a0, a1);
    return numerador / denominador;
}
