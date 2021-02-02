/**
 * Programa que solicita continuamente números al usuario hasta que introduce un 0
 * y calcula la media de todos ellos.
 */

#include <stdio.h>

int main() {
    int n = 0;
    float valor = 0, suma = 0;

    do {
        printf ("Nuevo valor: ");
        scanf ("%f", &valor);
        if (valor == 0) break;
        suma += valor;
        n++;
    } while (1);
    // Imprimimos el resultado con dos decimales:
    printf("La media de los valores introducidos es: %.2f", suma / n);
    return 0;
}