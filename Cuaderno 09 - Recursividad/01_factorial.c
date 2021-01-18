#include <stdio.h>
#define VALOR 1
/**
 * Función factorial
 * @param x: número del cual queremos calcular el factorial
 * @return: devuelve el factorial de ese número
 */
int fact(int x) {
    if (x == 0) return (1);
    x = x * fact(x-1);  // Llamada recursiva
    printf(" %d", x);
    return (x);
}

int main() {
    fact(VALOR);
    return 0;
}