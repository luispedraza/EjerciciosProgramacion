/**
 * Programa que pide dos números enteros y muestra todos los comprendidos
 * en un intervalo abierto.
 * Esta es una solución más complicada que no necesita que
 * el menor valor sea introducido primero.
 */

#include <stdio.h>

int main() {
    int a = 0, b = 0, i = 1;
    printf("Ingrese el primer valor: ");
    scanf("%d", &a);
    printf("Ingrese el segundo valor: ");
    scanf("%d", &b);
    if (a != b) {
        while ((a += (a < b) ? 1 : -1) != b) {
            printf("Valor %d: %d\n", i, a);
            i++;
        }
    } else {
        printf("Los valores son iguales");
    }
    return 0;
}

