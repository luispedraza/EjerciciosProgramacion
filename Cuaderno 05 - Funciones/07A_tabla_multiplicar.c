/*
 * Programa que muestra la tabla de multiplicar de un número
 */

#include <stdio.h>

int main() {
    int numero, c = 0;
    printf("Tabla de multiplicar del número (introduzca un valor): ");
    scanf("%d", &numero);
    while (c < 10) {
        c++;
        printf("%d x %d = %d\n", numero, c, numero * c);
    }

}