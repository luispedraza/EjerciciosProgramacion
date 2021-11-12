
#include <stdio.h>

#define DIM 4

void copiar(int *original, int *copia, int dim) {
    for (int i = 0; i < dim; i++) {
        *(copia + i) = *(original + i);
    }
}

void mostrar_vector(int *vector, int dim) {
    for (int i = 0; i < dim; i++) {
        printf("%3d", *(vector + i));
    }
}

int main() {
    int original[DIM] = {2, 4, 6, 8};
    int copia[DIM];
    copiar(original, copia, DIM);
    printf("Esta es la matriz copiada: ");
    mostrar_vector(copia, DIM);
    return 0;
}