/*
Implementa un programa que:
 - Defina un puntero a un entero
 - Asigne al entero un valor de 10
 - Muestre el valor del puntero (direccion de memoria)
 - Muestre el valor del entero
*/
#include <stdio.h>

int main() {
    int *p_entero;         // Declaración del puntero.
    int variable_entera;   // Necesitamos declarar la variable entera
    p_entero = &variable_entera;
    *p_entero = 10;
    printf("El puntero %p apunta al valor: %d\n", p_entero, variable_entera);
    return 0;
}