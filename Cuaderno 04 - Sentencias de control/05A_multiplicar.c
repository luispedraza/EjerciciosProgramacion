/**
 * Programa que muestra la tabal de multiplicar de un número entero.
 */

#include <stdio.h>

int main() {
    int valor = 0, c = 1;
    printf("Dame un número entero y te mostraré su tabla de multiplicar: ");
    scanf("%d", &valor);
    while (c <= 10) {
        printf("%d x %d = %d\n", valor, c, valor * c);
        c++;
    }
    return 0;
}