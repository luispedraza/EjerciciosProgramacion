/**
* Este programa muestra los tamaños de dos variables:
 * - una de tipo float
 * - una de tipo int
*/

#include <stdio.h>

int main() {
    float f;        // definición de la primera variable
    short int i;    // definición de la segunda variable
    // La siguiente línea puede producir un aviso de compilacion
    // un (warning) en muchos compiladores. Piensa por qué
    printf("Una variable float ocupa %d bytes\n", sizeof f);
    // Las dos siguientes lineas, sin embargo, son correctas:
    printf("Una variable float ocupa %lu bytes\n", sizeof(float));
    printf("Una variable entera (int) ocupa %lu bytes\n", sizeof i);
    return 0;
}
