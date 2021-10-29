/*
 * Programa en C que utiliza fputs() para escribir una cadena en un archivo
 * Modificado con tres tipos de apertura de archivo: r+, w+, a+
*/

#include <stdio.h>
#define CADENA "Estamos escribiendo esta cadena\n"

int main() {
    FILE * pf;
    // Con la opcion "r+":
    pf = fopen ("01_r+.txt", "r+");
    if (pf) {
        fputs (CADENA, pf); // No debería entrar aquí
        fclose (pf);
    }

    // Con la opcion "w+":
    pf = fopen ("01_w+.txt", "w+");
    if (pf) {
        fputs (CADENA, pf); // Se inserta la cadena de texto
        fclose (pf);
    }

    // Con la opcion "a+":
    pf = fopen ("01_a+.txt", "a+");
    if (pf) {
        fputs (CADENA, pf); // Se agrega la cadena al final
        fclose (pf);
    }

    return 0;
}

