/**
 * Programa que convierte una constante de tipo real o double
 * (como PI) a una cadena de texto
 * 3.14159265359 -> "3.14159265359"
 */

#include <stdio.h>

#define VALOR   3.14159265359

int main(void) {
    double valor = VALOR;
    char str[100];
    // Utilizamos una funcion disponible en la libreria
    // estandar de C:
    // https://www.cplusplus.com/reference/cstdio/sprintf/
    // Ojo: por defecto el formateo %f solo muestra 6 decimales

    sprintf(str, "%.10f", valor);
    printf ("Impresion en formato decimal: %.10f\n", valor);
    printf ("Impresion como cadena de caracteres: %s\n", str);
}