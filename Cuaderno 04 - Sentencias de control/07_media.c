/**
 * Programa que solicita continuamente valores al usuario calculando
 * su media. El programa finaliza cuando el usuario
 * introduce un 0.
 */

#include <stdio.h>

int main() {
    int valor = 0;  // valor que introduce el usuario
    int contador = 0;   // contador de valores introducidos
    float suma = 0, media = 0;

    do {
        // Solicitamos un nuevo valor al usuario
        printf ("Nuevo valor: ");
        scanf ("%d", &valor);
        if (valor == 0) break;
        suma += valor;
        contador++;
    } while (1);
    // Imprimimos el resultado con dos decimales:
    media = (float)suma / (float)contador;
    printf("La media de los valores es: %.2f", media);
    return 0;
}