
/*
 * Programa que almacena los vertices de un triangulo
 * en un array de vertices de tres elementos
 */

#include <stdio.h>

#define N 3

typedef struct {
    float x;
    float y;
} Coordenada;

int main() {
    Coordenada triangulo[N];
    for (int i = 0; i < N; i++) {
        printf("Coordenada del vertice %d.\n", i);
        printf("  x: ");
        scanf(" %f", &triangulo[i].x);
        printf("  y: ");
        scanf(" %f", &triangulo[i].y);
    }

    printf("Resultado: ");
    for (int i = 0; i < N; i++) {
        printf("(%.2f, %.2f), ",
               triangulo[i].x, triangulo[i].y);
    }
    return 0;
}