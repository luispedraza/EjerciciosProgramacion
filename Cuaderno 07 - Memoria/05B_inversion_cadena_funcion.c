#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_BUFER   100

void invertir(char *original, char *resultado) {
    // mirad cómo trabajo aquí con el bucle:
    int n, i;
    for (n = strlen(original), i = 0; i < n; i++) {
        *(resultado + i) = *(original + n - 1 - i);
    }
    // hay que cerrar la cadena.
    *(resultado + i) = '\0';
}

int main() {
    char *original = malloc(TAM_BUFER * sizeof(char));
    char *invertida = malloc(TAM_BUFER * sizeof(char));
    printf("Escribe una frase: ");
    scanf("%[^\n]", original);

    invertir(original, invertida);

    printf("%s\n", invertida);
    return 0;
}
