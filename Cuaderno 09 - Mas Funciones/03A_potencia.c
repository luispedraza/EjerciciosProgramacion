/**
 * Programa con una funcion recursiva
 * que calcula la potencia de un numero
 */

#include <stdio.h>

int potencia(int b, int e);

int main() {
    int b, e;
    int resultado;
    printf("Introduzca valor base: \n");
    scanf(" %d%*c", &b);
    printf("Introduzca el exponente: \n");
    scanf(" %d%*c", &e);
    resultado = potencia(b, e);
    printf("El resultado de %d elevado a %d es: %d \n", b, e, resultado);
    return 0;
}

int potencia(int base, int exponente) {
    if (exponente == 1)
        return base;    // es el caso trivial
    else
        return base * potencia(base, exponente - 1);
}
