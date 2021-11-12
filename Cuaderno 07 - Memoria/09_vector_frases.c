#include <stdio.h>
#include <stdlib.h>

#define N_FRASES 3
#define TAM_FRASE 100

int main() {
    char *frases[N_FRASES];
    for (int i = 0; i < N_FRASES; i++) {
        printf("Escribe la frase %d: ", i);
        frases[i] = malloc(TAM_FRASE * sizeof(char));
        scanf(" %[^\n]%*c", frases[i]);
    }
    // Mostramos los resultados:
    for (int i = 0; i < N_FRASES; i++) {
        printf("%s\n", frases[i]);
    }
    // Liberamos memoria:
    for (int i = 0; i < N_FRASES; i++) {
        free(frases[i]);
    }

    return 0;
}