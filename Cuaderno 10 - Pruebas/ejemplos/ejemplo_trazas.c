
#include <stdio.h>
// #define DEBUG
/**
 * Función que suma dos valores enteros
 * @param a: primer sumando
 * @param b: segundo sumando
 * @return devuelve la suma de a y b: a+b
 */
int sumar (int a, int b) {
    int resultado;
#ifdef DEBUG
    printf ("Función sumar. Valor de a: %d\n", a);
    printf ("Función sumar. Valor de b: %d\n", b);
#endif
    resultado = a + b;
    printf ("%d + %d = %d\n", a, b, resultado);
    return resultado;
}

int main() {
    sumar (12, 15);
}