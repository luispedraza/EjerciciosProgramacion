
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

void adquirir_datos(Coordenada *triangulo, int n) {
    for (int i = 0; i < n; i++) {
        printf("Coordenada del vertice %d.\n", i);
        printf("  x: ");
        scanf(" %f", &triangulo[i].x);
        printf("  y: ");
        scanf(" %f", &triangulo[i].y);
    }
}

void mostrar_datos(Coordenada *triangulo, int n) {
    printf("Resultado: ");
    for (int i = 0; i < n; i++) {
        printf("(%.2f, %.2f), ",
               triangulo[i].x, triangulo[i].y);
    }
}

int main() {
    Coordenada triangulo[N];
    adquirir_datos(triangulo, N);
    mostrar_datos(triangulo, N);
    return 0;
}