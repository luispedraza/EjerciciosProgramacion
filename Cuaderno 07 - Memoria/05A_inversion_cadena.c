#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_BUFER   100

int main() {
    char *original = malloc(TAM_BUFER * sizeof(char));
    char *invertida = malloc(TAM_BUFER * sizeof(char));
    printf("Escribe una frase: ");
    scanf("%[^\n]", original);
    // mirad cómo trabajo aquí con el bucle:
    int n, i;
    for (n = strlen(original), i = 0; i < n; i++) {
        *(invertida + i) = *(original + n - 1 - i);
    }
    // hay que cerrar la cadena.
    *(invertida + i) = '\0';

    printf("%s\n", invertida);

    return 0;
}
