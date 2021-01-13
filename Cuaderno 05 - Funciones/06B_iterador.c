/*
 * Programa que muestra los números enteros comprendidos en un intervalo abierto
 * (Otra solución que no requiere interoducir los valores en un orden dado)
 */
#include <stdio.h>

void mostrarIntervalo(int a, int b);

int main() {
    int a, b;
    printf("Introduzca dos números enteros separados por un espacio: ");
    scanf("%d %d", &a, &b);
    mostrarIntervalo(a, b);
}

void mostrarIntervalo(int a, int b) {
    if (a == b) {
        printf("Los dos números son iguales");
    } else {
        printf("Valores del intervalo: ");
        while (a != (a < b ? b - 1 : b + 1)) printf("%d ", (a < b) ? ++a : --a);
    }

}