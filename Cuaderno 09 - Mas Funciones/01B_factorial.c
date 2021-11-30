/**
 * Programa que calcula el factorial de un valor.
 * usando una función recursiva.
 * Se pide el valor al usuario.
 */

#include <stdio.h>

/**
 * Funcion que pide un valor natural al usuario
 * @return el valor introducido
 */
int pide_valor() {
    int valor;
    printf ("Introduzca un numero natural: ");
    scanf ("%d", &valor);
    return valor;
}

/**
 * Función factorial
 * @param x: número del cual queremos calcular el factorial
 * @return: devuelve el factorial de ese número
 */
int fact(int x) {
    if (x == 0) return (1);
    x = x * fact(x-1);  // Llamada recursiva
    // Para depurar, podríamos ver el valor calulado:
    // printf(" %d", x);
    return (x);

}

int main() {
    int valor = pide_valor();
    int factorial = fact(valor);
    printf ("El factorial de %d es: %d", valor, factorial);
    return 0;
}