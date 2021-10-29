/*
 * Programa que muestra los números enteros comprendidos en un intervalo abierto
 */
#include <stdio.h>

void mostrarIntervalo(int a, int b);

int main() {
    int a, b;
    printf ("Introduzca el extremo inferior del intervalo: ");
    scanf ("%d", &a);
    printf ("Introduzca el extremo superior del intervalo: ");
    scanf ("%d", &b);
    mostrarIntervalo(a, b);

}

void mostrarIntervalo(int a, int b) {
    if (a < b) {
        a++;
        while (a<b) {
            printf ("%d, ", a++);
        }
    } else if (a > b) {
        printf ("Error: el segundo valor debe ser mayor que el primero\n");
    } else {
        printf ("Los dos valores son iguales\n");
    }
}