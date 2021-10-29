/*
 * Programa que muestra la tabla de multiplicar de un número
 * Aquí empleamos recursividad
 */

#include <stdio.h>

void tabla(int numero, int multiplicador);

int main() {
    int numero;
    printf("Tabla de multiplicar del valor (introduzca un entero):\n");
    scanf("%d", &numero);
    tabla(numero, 1);
}

void tabla(int numero, int multiplicador) {
    printf("%d x %d = %d\n", numero, multiplicador, numero * multiplicador);
    if (multiplicador<10) tabla (numero, multiplicador+1);
}