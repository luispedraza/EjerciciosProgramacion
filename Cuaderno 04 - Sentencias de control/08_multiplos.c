/**
 * Programa que muestra todos los números comprendidos entre 1 y 100
 * que son múltiplis de 7 o de 13
 */

#include <stdio.h>

#define INICIO 1
#define FINAL 100
#define MULT1 7
#define MULT2 13

int main() {
    for (int i = INICIO; i <= FINAL; i++) {
        if ((i % MULT1 == 0) || (i % MULT2 == 0)) {
            printf("%d\n", i);
        }
    }
    return 0;
}