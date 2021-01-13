/*
 * Programa que copia un fichero en otro
 * Carácter a carácter
 */

#include <stdio.h>

int main(int argc, char* argv[]) {
    FILE *ficheroOrigen, *ficheroDestino;
    if (argc < 3) {
        printf ("Debe indicar dos parámetros: un archivo de origen y otro de destino.\n");
        return -1;
    }
    ficheroOrigen = fopen(argv[1], "r");
    if (ficheroOrigen == NULL) {
        printf ("No se pudo abrir el fichero de origen: %s\n", argv[1]);
        return -2;
    }
    ficheroDestino = fopen(argv[2], "w");
    if (ficheroDestino == NULL) {
        printf ("No se pudo abrir el fichero de destino: %s\n", argv[2]);
        return -2;
    }
    while (!feof(ficheroOrigen)) {
        fputc(fgetc(ficheroOrigen), ficheroDestino);
    }
    fclose(ficheroOrigen);
    fclose(ficheroDestino);
    return 0;
}