/**
 * Programa que multiplica dos valores reales
 * y muestra el resultado de varias formas
 */
#include <stdio.h>

int main() {
    float x, y, producto;
    printf("Introduce el primer valor: ");
    scanf(" %f", &x);
    printf("Introduce el segundo valor: ");
    scanf(" %f", &y);
    producto = x * y;
    printf("Primera forma: %f x %f = %f\n", x, y, producto);
    printf("Segunda forma: %f x %f = %d\n", x, y, producto);
    printf("Tercera forma: %f x %f = %d\n", x, y, (int) producto);
    return 0;
}
