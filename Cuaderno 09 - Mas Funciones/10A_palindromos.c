#include <stdio.h>
#include <string.h>

#define TAM_MAX_BUFER 100

int es_palindromo_rec(char *frase, int ini, int fin) {
    if (ini < fin) {
        if (frase[ini] != frase[fin]) return 0;
        else return es_palindromo_rec(frase, ini + 1, fin - 1);
    }
    // Si llegamos aquí es porque (ini >= fin):
    // Si ini == fin sólo tenemos una letra
    // Si ini > fin es porque la frase en la llamada anterior tenía dos letras iguales
    return 1;
}

int main() {
    char frase[TAM_MAX_BUFER];
    printf("Dame una frase: ");
    scanf("%[^\n]", frase);
    // Primero podemos redefinir la cadena eliminando espacios en blanco
    int n = 0;
    for (int i = 0; i < TAM_MAX_BUFER; i++) {
        if (frase[i] != ' ') {
            // Si no es un espacio en blanco...
            frase[n++] = frase[i];
        }
        if (frase[i] == '\0') break; // hemos terminado
    }
    puts(es_palindromo_rec(frase, 0, strlen(frase) - 1) ? "Es palindromo" : "No es palindromo");
    return 0;
}

