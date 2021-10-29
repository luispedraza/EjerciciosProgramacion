/*
 * Programa que utiliza fputs para escribir texto en fichero
 * Documentación
 * fopen: http://www.cplusplus.com/reference/cstdio/fopen/
 * fputs: http://www.cplusplus.com/reference/cstdio/fputs/
 * fclose: https://www.cplusplus.com/reference/cstdio/fclose/
 */

#include <stdio.h>

#define NOMBRE_FICHERO "fichero.txt"

int main(int argc, char **argv) {
    FILE *fp;
    char cadena[] = "Mostrando el uso de fputs en un Fichero.\n";

    // Primero abrimos el fichero
    fp = fopen(NOMBRE_FICHERO, "w");
    fputs(cadena, fp);
    // No debemos olvidar cerrar el fichero abierto
    fclose(fp);
    return 0;
}
