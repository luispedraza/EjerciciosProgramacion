/**
 * Implementa un programa que lea dos números enteros e indique el mayor de ellos
 * o un mensaje indicando que son iguales.
 * Solución 2
 */

#include <stdio.h>

int main() {
    int valor1=0, valor2=0;
    printf ("Ingresa el primer valor: ");
    scanf ("%i", &valor1);
    printf ("Ingresa el segundo valor: ");
    scanf ("%i", &valor2);
    if (valor1 == valor2) {
        printf ("Los números son iguales.\n");
    } else {
        printf ("El mayor es %d.\n", (valor1 > valor2) ? valor1 : valor2);
    }

    return 0;
}