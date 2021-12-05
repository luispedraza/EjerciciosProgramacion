/*
 * Programa que copia un fichero en otro
 * carácter a carácter
 * Documentación fgetc: https://www.cplusplus.com/reference/cstdio/fgetc/
 */

#include <stdio.h>

#define ARCHIVO_ORIGEN  "chistes.txt"
#define ARCHIVO_DESTINO "chistes_copia.txt"

int main() {
    FILE *ficheroOrigen, *ficheroDestino;
    int c = 0; // caracter que iremos leyendo
    ficheroOrigen = fopen(ARCHIVO_ORIGEN, "r"); // modo lectura
    if (ficheroOrigen == NULL) {
        printf ("No se pudo abrir el fichero de origen: %s\n", ARCHIVO_ORIGEN);
        return -2;
    }
    ficheroDestino = fopen(ARCHIVO_DESTINO, "w"); // modo escritura
    if (ficheroDestino == NULL) {
        printf ("No se pudo abrir el fichero de destino: %s\n", ARCHIVO_DESTINO);
        return -2;
    }

    while ((c = fgetc(ficheroOrigen)) != EOF) {
        // Copiamos caracteres hasta encontrar EOF
        fputc(c, ficheroDestino);
    }
    fclose(ficheroOrigen);
    fclose(ficheroDestino);
    return 0;
}