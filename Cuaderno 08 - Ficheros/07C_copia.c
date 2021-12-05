/*
 * Programa que copia un fichero en otro
 * carácter a carácter.
 * Este código tiene un problema. Piensa por qué.
 */

#include <stdio.h>
#define ARCHIVO_ORIGEN  "chistes.txt"
#define ARCHIVO_DESTINO "chistes_copia.txt"

int main() {
    FILE *ficheroOrigen, *ficheroDestino;
    ficheroOrigen = fopen(ARCHIVO_ORIGEN, "r");
    if (ficheroOrigen == NULL) {
        printf ("No se pudo abrir el fichero de origen: %s\n", ARCHIVO_ORIGEN);
        return -2;
    }
    ficheroDestino = fopen(ARCHIVO_DESTINO, "w");
    if (ficheroDestino == NULL) {
        printf ("No se pudo abrir el fichero de destino: %s\n", ARCHIVO_DESTINO);
        return -2;
    }
    while (!feof(ficheroOrigen)) {
        fputc(fgetc(ficheroOrigen), ficheroDestino);
    }
    fclose(ficheroOrigen);
    fclose(ficheroDestino);
    return 0;
}