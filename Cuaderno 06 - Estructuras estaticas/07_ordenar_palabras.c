#include <stdio.h>
#include <string.h>

#define N_PALABRAS 5    // numero de palabras
#define TAM_PALABRA 20  // tamaño maximo de cada palabra


void pedir_palabras(char p[][TAM_PALABRA], int n_palabras);

void mostrar_palabras(char p[][TAM_PALABRA], int n_palabras);

void ordenar_palabras(char p[][TAM_PALABRA], int n_palabras);

int main() {
    char palabras[N_PALABRAS][TAM_PALABRA];   // Contiene las palabras
    pedir_palabras(palabras, N_PALABRAS);
    printf("Palabras introducidas:\n");
    mostrar_palabras(palabras, N_PALABRAS);
    ordenar_palabras(palabras, N_PALABRAS);
    printf("Palabras ordenadas:\n");
    mostrar_palabras(palabras, N_PALABRAS);
}

void pedir_palabras(char p[][TAM_PALABRA], int n_palabras) {
    int i;
    for (i = 0; i < n_palabras; i++) {
        printf("Introduzca palabra %d: ", i);
        scanf(" %s", p[i]);
    }
}

void mostrar_palabras(char p[][TAM_PALABRA], int n_palabras) {
    int i;
    for (i = 0; i < n_palabras; i++) {
        printf("%d: %s\n", i, p[i]);
    }
}

void ordenar_palabras(char p[][TAM_PALABRA], int n_palabras) {
    /* Empleando el metodo de insercion */
    int i;  // recorre el vector, desde 1 hasta n-1
    int j;  // recorre la lista ordenada hacia la izquierda
    char aux[TAM_PALABRA];    // variable temporal que contiene la palabra
    for (i = 1; i < n_palabras; i++) {
        strcpy(aux, p[i]);
        j = i;
        while (j > 0 && strcmp(aux, p[j - 1]) < 0) {
            // desplazamos elementos a la derecha para hacer hueco:
            strcpy(p[j], p[j - 1]);
            j--;
        }
        // Insertamos el elemento en su ubicacion:
        strcpy(p[j], aux);
    }
}