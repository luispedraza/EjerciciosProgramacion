/**
 * Programa sencillo que determina si un valor es primo.
 */

#include<stdio.h>

int main() {
    int N;
    printf("Introduce un valor: ");
    scanf("%d", &N);
    for (int i = 2; i < N; i++) {
        if (N % i == 0) {
            // El valor tiene un divisor entero que no es 1 o N
            printf("El valor %d NO es primo.", N);
            return 0;
        }
    }
    printf("El valor %d SI es primo.", N);
    return 0;
}
