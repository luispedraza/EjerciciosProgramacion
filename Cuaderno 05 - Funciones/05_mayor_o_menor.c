/** Implementa un programa que lea dos números enteros
 * y se los pase a una función que escriba por pantalla cual es el mayor
 * o un mensje si son iguales.
 */
#include <stdio.h>

/**
 * Función que compara dos valores enteros
 * @param a : primer valor
 * @param b : segundo valor
 * @return : 1 si el mayor es a, -1 si el mayor es b, 0 si son iguales.
 */
int mayor_o_menor(int a, int b);

int main() {
    int a, b;
    printf ("Este programa compara dos números enteros.\n");
    printf ("Introduzca el primer valor: ");
    scanf ("%d%*c", &a);
    printf ("Introduzca el segundo valor: ");
    scanf ("%d%*c", &b);
    switch(mayor_o_menor(a, b)) {
        case 1:
            printf ("El mayor es el primer valor: %d > %d", a, b);
            break;
        case -1:
            printf ("El mayor es el segundo valor: %d < %d", a, b);
            break;
        default:
            printf ("Los dos números son iguales: %d == %d", a, b);
    }

    return 0;
}


int mayor_o_menor(int a, int b) {
    if (a > b) return 1;
    if (a < b) return -1;
    return 0;
}