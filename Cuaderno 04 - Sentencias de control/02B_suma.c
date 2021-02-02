/**
 * Programa que suma dos valores enteros, empleando una función:
 */
#include <stdio.h>

int suma(int, int);

int main() {
    int a = 0, b = 0;
    printf("Introduzca dos valores enteros:\n");
    printf("Primer valor: ");
    scanf("%i", &a);
    printf("Segundo valor: ");
    scanf("%i", &b);
    printf("La suma de %d y %d es: %d", a, b, suma(a, b));
    return 0;
}

int suma(int a, int b) {
    return a+b;
}