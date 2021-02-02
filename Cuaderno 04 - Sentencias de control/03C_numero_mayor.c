/**
 * Implementa un programa que lea dos números enteros e indique el mayor de ellos
 * o un mensaje indicando que son iguales. En este caso empleando una función de comparación.
 */

#include <stdio.h>

/**
 * Función que compara dos números
 * @param a Primer número
 * @param b Segundo número
 * @return un 1 si el mayor es el primer, un 2 si el mayor es el segundo, un 0 si son iguales.
 */
int compara(int a, int b);

int main() {
    int valor1 = 0, valor2 = 0;
    printf("Ingresa el primer valor: ");
    scanf("%i", &valor1);
    printf("Ingresa el segundo valor: ");
    scanf("%i", &valor2);
    int comp = compara(valor1, valor2);
    if (comp == 0) {
        printf("Los números son iguales.\n");
    } else {
        printf("El mayor es %d.\n", (comp == 1) ? valor1 : valor2);
    }
    return 0;
}

int compara(int a, int b) {
    return (a == b) ? 0 : ((a > b) ? 1 : 2);
}