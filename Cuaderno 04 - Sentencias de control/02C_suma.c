/**
 * Programa que solicita continuamente valores al usuario y va mostrando
 * la suma acumulada. El programa finaliza cuando se introduce un cero.
 */
#include <stdio.h>

int suma(int, int);

int main() {
    int valor = 0, acumulado = 0;
    printf("Introduzca valores para calcular la suma acumulada.\n");
    printf("Introduzca un 0 para finalizar.\n");
    do {
        printf("Introduzca un valor entero: ");
        scanf("%i", &valor);
        acumulado = suma(acumulado, valor);
        printf("===> La suma acumulada es: %d\n", acumulado);
    } while (valor != 0);
    return 0;
}

int suma(int a, int b) {
    return a + b;
}