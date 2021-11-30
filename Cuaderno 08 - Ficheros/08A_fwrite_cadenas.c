/*
 * Demostración del epleo de fwrite()
 * Referencia: http://www.cplusplus.com/reference/cstdio/fwrite/
 */

#include <stdio.h>

#define ARCHIVO_CADENAS "T08_08_string.bin"

void escribeString() {
    char cadena[] = "La cadena que queremos guardar\n";
    FILE *pf = fopen(ARCHIVO_CADENAS, "ab");
    if (pf) {
        fwrite(cadena, sizeof(char), sizeof(cadena)+1, pf);
        fclose(pf);
    }
}

int main() {
    escribeString();
    return 0;
}