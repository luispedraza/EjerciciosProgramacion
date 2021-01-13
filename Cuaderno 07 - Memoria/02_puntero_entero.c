/*
Implemente un programa que defina un puntero a un tentero
*/
#include <stdio.h>

int main() {
    int *p_entero;              // Declaración del puntero.
    int variable_entera = 10;   // Declaración de variable entera, inicializada en 10.

    p_entero = &variable_entera;
    printf("El puntero apunta al valor: %i\n", *p_entero);

    return 0;
}