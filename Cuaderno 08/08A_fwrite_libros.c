/*
 *
 * Demostración del epleo de fwrite()
 * Referencia: http://www.cplusplus.com/reference/cstdio/fwrite/
 */
#include <stdio.h>
#define ARCHIVO_LIBROS "08_libros.bin"

typedef struct libro {
    char titulo[40];
    int nPaginas;
    float precio;
} TLibro;

void escribeUnLibro() {
    TLibro unLibro = {
            "El descenso al caos",
            320,
            17.46
    };
    FILE *pf = fopen(ARCHIVO_LIBROS, "ab");
    if (pf) {
        fwrite(&unLibro, sizeof(TLibro), 1, pf);
        fclose(pf);
    }
}

void escribeVariosLibros() {
    TLibro libros[3] = {{"Cacerolas y sartenes para el viajero", 320, 17.46},
                        {"El viaje de Pifo", 110, 10.34},
                        {"Canciones de soledad y penita",    230, 27.99}};
    FILE *pf = fopen(ARCHIVO_LIBROS, "ab");
    if (pf) {
        fwrite(libros, sizeof(TLibro), 3, pf);
        fclose(pf);
    }
}

void leeLibros() {
    TLibro libro;
    FILE *pf = fopen(ARCHIVO_LIBROS, "rb");
    if (pf) {
        while (fread(&libro, sizeof(TLibro), 1, pf)) {
            printf ("Libro: %s\n\t%d páginas, %.2f euros\n",
                    libro.titulo,
                    libro.nPaginas,
                    libro.precio);
        }
    }
}

int main() {
    escribeUnLibro();
    escribeVariosLibros();
    // Mostramos el contenido que ha quedado guardado:
    leeLibros();
    return 0;
}