
#include <stdio.h>

#define DIM 4

int main() {
    int original[DIM] = {2, 4, 6, 8};
    int copia[DIM];
    int *pOriginal = original;
    int *pCopia = copia;
    for (int i = 0; i < DIM; i++) {
        *(pCopia + i) = *(pOriginal + i);
    }
    printf("Esta es la matriz copiada: ");
    for (int i = 0; i < DIM; i++) {
        printf("%3d", *(pCopia + i));
    }
    return 0;
}