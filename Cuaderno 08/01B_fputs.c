/*
 * Programa en C que utiliza fputs() para escribir una cadena en un archivo
 * Mejorado con tres tipos de apertura de archivo: r+, w+, a+
 * Mejorado empleando una función de escritura especial.
*/

#include <stdio.h>

#define CADENA "Estamos escribiendo esta cadena\n"

void escribe(char *nombre_fichero, char *cadena, char *modo) {
    FILE *pf = fopen(nombre_fichero, modo);
    if (pf) {
        fputs(cadena, pf);
        fclose(pf);
    }
}

int main() {
    escribe ("01_r+.txt", CADENA, "r+");
    escribe ("01_w+.txt", CADENA, "w+");
    escribe ("01_a+.txt", CADENA, "a+");
    return 0;
}

