/**
 * Programa con una funcion recursiva
 * que calcula la potencia de un numero
 */

#include <stdio.h>
#include <stdlib.h>

int potencia(int b, int e);

/**
 * Esta funcion main recibe los valores de la base (primer argumento)
 * y el exponente (segundo argumento)
 */
int main(int argc, const char *argv[]) {
    int b, e;
    int resultado;
    if (argc != 3) {
        // No hay aargumentos suficientes
        printf("Recuerda que debes proporcionar la base y el exponente.");
        return -1;
    }
    b = atoi(argv[1]);
    e = atoi(argv[2]);
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
