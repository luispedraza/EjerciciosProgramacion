/*
 * Programa que muestra la tabla de multiplicar de un número
 */

#include <stdio.h>

void tabla(int valor) {
    int c = 1;
    while (c <= 10) {
        printf("%d x %d = %d\n", valor, c, valor * c);
        c++;
    }
}

int main() {
    int numero;
    printf("Tabla de multiplicar del valor (introduzca un valor):\n");
    scanf("%d", &numero);
    tabla(numero);
}
