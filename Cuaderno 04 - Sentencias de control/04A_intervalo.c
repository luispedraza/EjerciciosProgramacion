/**
 * Programa que pide dos valores enteros y muestra todos los comprendidos
 * en un intervalo abierto.
 */

#include <stdio.h>

int main() {
    int a = 0, b = 0, i = 1;
    printf("Ingrese el primer valor: ");
    scanf("%d", &a);
    printf("Ingrese el segundo valor mayor que el primero: ");
    scanf("%d", &b);
    if (a < b) {
        a++; // se comienza en a+1 y se termina en b‐1
        while (a < b) {
            printf("valor %d = %d\n", i, a);
            i++;
            a++;
        }
    } else if (a > b) {
        printf("El mayor debe ser el segundo valor");
    } else {
        printf("Los dos valores son iguales");
    }
    return 0;
}

