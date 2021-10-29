/**
* Programa que lee un caracter
 * y lo muestra por pantalla
 * empleamos scanf()
*/

#include <stdio.h>

int main() {
    char c;
    printf ("Dame un caracter: ");
    scanf(" %c", &c);   // espacio en blanco antes de %c
    printf("El caracter leido por teclado es: %c\n", c);

    printf ("Dame otro caracter: ");
    scanf(" %c", &c);   // Espacio en blanco antes de %c
    printf("El caracter leido por teclado es: %c\n", c);
    return 0;
}
