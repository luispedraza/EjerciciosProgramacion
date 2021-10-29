/**
* Programa que lee un caracter
 * y lo muestra por pantalla
 * empleamos getchar()
*/

#include <stdio.h>

int main() {
    int c;
    printf ("Dame un caracter: ");
    c = getchar();
    printf("El caracter leido por teclado es: %c\n", c);
    return 0;
}
