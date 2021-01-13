/*
 * Programa en C que utiliza fputs() para escribir una cadena en un archivo
 * Mejorado con tres tipos de apertura de archivo: r+, w+, a+
*/

#include <stdio.h>
#define CADENA "Estamos escribiendo esta cadena\n"

int main() {
    FILE * pf;
    // Con la opcion "r+":
    pf = fopen ("01_r+.txt", "r+");
    if (pf) {
        fputs (CADENA, pf); // No debería funcionar
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
        fputs (CADENA, pf); // Se agreva la cadena de texto al final
        fclose (pf);
    }

    return 0;
}

