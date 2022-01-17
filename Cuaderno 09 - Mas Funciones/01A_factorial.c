/**
 * Programa que calcula el factorial de un valor
 * usando una función recursiva
 */

#include <stdio.h>
#define VALOR 10

/**
 * Funcion factorial
 * @param x: número del cual queremos calcular el factorial
 * @return: devuelve el factorial de ese número
 */
int fact(int x) {
    if (x == 0) return (1);
    x = x * fact(x-1);  // Llamada recursiva
    // Para depurar, podríamos ver el valor calculado en cada llamada:
    // printf(" %d", x);
    return (x);

}

int main() {
    int factorial = fact(VALOR);
    printf ("El factorial de %d es: %d", VALOR, factorial);
    return 0;
}