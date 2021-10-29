/** Implementa un programa que lea dos números enteros
 * y se los pase a una función que escriba por pantalla cual es el mayor
 * o un mensaje si son iguales.
 */
#include <stdio.h>

/**
 * Función que compara dos valores enteros
 * @param a : primer valor
 * @param b : segundo valor
 */
void mayor_o_menor(int a, int b);

int main() {
    int a, b;
    printf ("Este programa compara dos valores enteros.\n");
    printf ("Introduzca el primer valor:\n");
    scanf ("%d%*c", &a);
    printf ("Introduzca el segundo valor:\n");
    scanf ("%d%*c", &b);
    mayor_o_menor(a, b);
    return 0;
}

void mayor_o_menor(int a, int b) {
    if (a > b) printf("El mayor es %d", a);
    else if (a < b) printf("El mayor es %d", b);
    else printf("Los valores son iguales");
}