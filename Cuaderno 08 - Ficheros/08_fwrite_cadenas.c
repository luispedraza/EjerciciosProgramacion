/*
 * Demostración del empleo de fwrite() para
 * escribir simples cadenas de texto
 * Referencia: http://www.cplusplus.com/reference/cstdio/fwrite/
 */

#include <stdio.h>
#include <string.h> // necesario para strlen()

#define ARCHIVO_CADENAS "T08_08_string.txt"

void escribeString(char *cadena, int n) {
    FILE *pf = fopen(ARCHIVO_CADENAS, "a");
    if (pf) {
        fwrite(cadena, sizeof(char), n, pf);
        fclose(pf);
    }
}

int main() {
    char cadena1[] = "La cadena que queremos guardar. \n";
    char cadena2[] = "Otra cadena distina. ";
    char cadena3[50] = "Y otra cadena final. ";
    escribeString(cadena1, sizeof(cadena1)-1);
    escribeString(cadena2, sizeof(cadena2)-1);
    escribeString(cadena3, strlen(cadena3));
    return 0;
}