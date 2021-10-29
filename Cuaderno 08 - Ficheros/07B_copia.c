/*
 * Programa que copia un fichero en otro
 * carácter a carácter
 * Solución alternativa utilizando feof
 * https://www.cplusplus.com/reference/cstdio/feof/
 * También utilizamos los parámetros de main para pasar
 * los nombres de archivo origen y destino
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *ficheroOrigen, *ficheroDestino;
    int c = 0;
    if (argc < 3) {
        printf("Debe indicar dos argumentos:"
               " un archivo de origen y otro de destino.\n");
        return -1;
    }
    ficheroOrigen = fopen(argv[1], "r");
    if (ficheroOrigen == NULL) {
        printf("No se pudo abrir el fichero de origen: %s\n", argv[1]);
        return -2;
    }
    ficheroDestino = fopen(argv[2], "w");
    if (ficheroDestino == NULL) {
        printf("No se pudo abrir el fichero de destino: %s\n", argv[2]);
        return -2;
    }
    while (1) {
        c = fgetc(ficheroOrigen);
        if (feof(ficheroOrigen)) break;
        fputc(c, ficheroDestino);
    }
    fclose(ficheroOrigen);
    fclose(ficheroDestino);
    return 0;
}