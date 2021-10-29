/**
* programa que muestra los numeros primos entre 2 y N
*/
#include <stdio.h>

/**
 * Funcion que indica si un valor es primo o no
 * @param v : valor que se investiga
 * @return : 1 si es primo, -1 si no lo es.
 */
int es_primo(int v) {
    for (int i = 2; i < v; i++) {
        if (v % i == 0) {
            // El valor tiene un divisor entero que no es 1 o N
            return -1;
        }
    }
    return 1;
}

int main() {
    int N = 0;
    printf ("Dame el valor de N: ");
    scanf ("%d", &N);
    printf ("Valores primos en el intervalo [0, %d]:\n", N);
    for (int i = 2; i<=N; i++) {
        if (es_primo(i) > 0) {
            printf ("%d, ", i);
        }
    }
}
