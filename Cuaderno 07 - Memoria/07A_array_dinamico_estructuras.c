
/*
 * Programa que almacena los vértices de un triangulo
 * Se emplea un vector dinámico creado en tiempo de ejecución
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x;
    float y;
} Coordenada;

int main() {
    Coordenada *poligono;
    int n;
    printf("Indique el numero de vertices: ");
    scanf(" %d", &n);
    poligono = malloc(n * sizeof(Coordenada));
    for (int i = 0; i < n; i++) {
        printf("Coordenada del vertice %d.\n", i);
        printf("  x: ");
        scanf(" %f", &poligono[i].x);
        printf("  y: ");
        scanf(" %f", &poligono[i].y);
    }

    printf("Resultado: ");
    for (int i = 0; i < n; i++) {
        printf("(%.2f, %.2f), ",
               poligono[i].x, poligono[i].y);
    }
    // liberamos la memoria:
    free (poligono);
    return 0;
}