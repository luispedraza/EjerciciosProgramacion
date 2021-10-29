/** Programa con una función resta() que resta dos números ingresados por teclado
 */

#include<stdio.h>

void resta();

int main() {
    printf("Este programa realiza la resta entre dos valores.\n");
    resta();
    return 0;
}

void resta() {
    int x, y, resultado;
    printf("Programa que calcula la resta de dos valores\n");
    printf("Introduzca el minuendo: ");
    scanf("%d*c", &x);
    printf("Introduzca el sustraendo: ");
    scanf("%d*c", &y);
    printf("%d - %d = %d", x, y, x - y);
}
