/**
 * Programa que suma dos valores enteros:
 */
#include <stdio.h>

int main() {
    int a = 0, b = 0;
    printf("Introduzca dos valores enteros:\n");
    printf("Primer valor: ");
    scanf("%i", &a);
    printf("Segundo valor: ");
    scanf("%i", &b);
    printf("La suma de %d y %d es: %d", a, b, a + b);
    return 0;
}