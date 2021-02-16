/**
 * Programa que convierte una constante de tipo real o double
 * (como PI) a una cadena de texto
 * 3.1419 -> "3.1419"
 */

#include <stdio.h>
#include <stdlib.h>
#define VALOR 3.14159

int main(void) {
    double valor = VALOR;
    char str[100];
    // En el caso de trabajar en Windows podríamos utilizar _fcvtp
    // https://docs.microsoft.com/en-us/cpp/c-runtime-library/reference/fcvt?view=msvc-160
    // Pero existen alternativas más portables:

    sprintf(str, "%f", valor);
    printf ("Impresión en formato decimal: %f\n", valor);
    printf ("Impresión como cadena de caracteres: %s\n", str);
}