/**
 * Programa que muestra la tabla de multiplicar de un valor entero.
 */

#include <stdio.h>

int main() {
    int valor = 0, contador = 1;
    printf("Dame un valor entero y muestro su tabla de multiplicar: ");
    scanf("%d", &valor);
    while (contador <= 10) {
        printf("%d x %d = %d\n", valor, contador, valor * contador);
        // incrementamos aquí el contador
        contador++;
    }
    return 0;
}