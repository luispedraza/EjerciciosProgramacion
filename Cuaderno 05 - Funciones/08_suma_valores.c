/**
* Función que genera valores enteros de N en N, entre A y B
 * y suma todos los divisibles por otro valor C
*/

#include <stdio.h>
/**
 * Funcion que genera la serie y suma valores:
 * @param A : valor inicial
 * @param B : valor final
 * @param C : valor divisor entero
 * @param N : valor de incremento de la serie
 */
void serie_suma(int A, int B, int C, int N);

int main() {
    int A, B, C, N;
    printf("Valor inicial de la serie (A): ");
    scanf ("%d", &A);
    printf("Valor final de la serie (B): ");
    scanf ("%d", &B);
    printf("Valor incremento (N): ");
    scanf ("%d", &N);
    printf("Valor divisor (C): ");
    scanf ("%d", &C);
    serie_suma(A, B, C, N);
}

void serie_suma(int A, int B, int C, int N) {
    int suma = 0;   // almacenará el valor acumulado
                    // sumado los valores divisibles por C
    int contador = 0;   // almacena valores de N en N
    for (contador = A; contador <= B; contador+=N) {
        printf("%d, ", contador);
        if (contador % C == 0) {
            suma += contador;
        }
    }
    printf ("\nResultado de la suma: %d\n", suma);
}