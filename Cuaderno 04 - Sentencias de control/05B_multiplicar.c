/**
 * Programa que muestra la tabal de multiplicar de un número entero.
 * (Otra solución)
 */

#include <stdio.h>

int main() {
    int valor = 0, contador = 0;
    printf("Dame un valor entero y te muestro su tabla de multiplicar: ");
    scanf("%d", &valor);
    while (contador++ < 10) {
        printf("%d x %d = %d\n", valor, contador, valor * contador);
    }
    return 0;
}