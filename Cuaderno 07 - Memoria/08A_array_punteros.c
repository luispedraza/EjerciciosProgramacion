
/*
 * Programa que almacena los vértices de un triangulo
 * Se emplea un vector dinámico creado en tiempo de ejecución
 * El vecetor contien punteros a estructuras creadas dinámicamente
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x;
    float y;
} Coordenada;

Coordenada **crear_poligono(int *n) {
    // devuelve un puntero a un vector de punteros a vertices
    printf("Indique el numero de vertices: ");
    scanf(" %d", n);    // es una direccion de memoria
    return malloc((*n) * sizeof(Coordenada *));
}

void adquirir_datos(Coordenada **pol, int n) {
    for (int i = 0; i < n; i++) {
        // Creamos el nuevo elemento:
        *(pol + i) = (Coordenada*) malloc(sizeof(Coordenada));
        printf("Coordenada del vertice %d.\n", i);
        printf("  x: ");
        scanf(" %f", &((*(pol + i))->x));
        printf("  y: ");
        scanf(" %f", &((*(pol + i))->y));
    }
}

void mostrar_datos(Coordenada **pol, int n) {
    printf("Resultado: ");
    for (int i = 0; i < n; i++) {
        printf("(%.2f, %.2f), ",
               pol[i]->x, pol[i]->y);
    }
}

int main() {
    int n;
    Coordenada **poligono = crear_poligono(&n);
    adquirir_datos(poligono, n);
    mostrar_datos(poligono, n);
    // liberamos la memoria:
    // primer la memoria asignada a cada elemento:
    for (int i = 0; i < n; i++) free(poligono[i]);
    // luego el vector dinámico de punteros:
    free(poligono);
    return 0;
}