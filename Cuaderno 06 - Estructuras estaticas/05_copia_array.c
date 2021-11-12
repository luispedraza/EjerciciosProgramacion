#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

void copiar_array(float destino[][COLUMNAS], float origen[][COLUMNAS]);

int main() {
    float a[FILAS][COLUMNAS], b[FILAS][COLUMNAS];
    int f = 0, c = 0;   // contadores

    /* Leer datos del array a */
    for (f = 0; f < FILAS; f++) {
        for (c = 0; c < COLUMNAS; c++) {
            printf("a[%d][%d] = ", f, c);
            scanf(" %f", &a[f][c]);
        }
    }

    /* Copiar */
    copiar_array(b, a);

    /* Mostramos el contenido del array b */
    for (f = 0; f < FILAS; f++) {
        for (c = 0; c < COLUMNAS; c++)
            printf("%10.2f", b[f][c]);
        printf("\n");
    }
    return 0;
}

void copiar_array(float destino[][COLUMNAS], float origen[][COLUMNAS]) {
    int f, c;
    for (f = 0; f < FILAS; f++) {
        for (c = 0; c < COLUMNAS; c++)
            destino[f][c] = origen[f][c];
    }
}
