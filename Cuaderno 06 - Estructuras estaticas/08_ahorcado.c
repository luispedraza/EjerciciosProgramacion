
#include <stdio.h>
#include <string.h>

#define WORD "murcielago"
#define N_FALLOS 10

int buscar_caracter(char correcta[], char adivinada[], char caracter);

int main() {
    char palabra[] = WORD;
    char palabra_actual[] = WORD;
    char letras[60] = "";     // Letras que se han usado
    char nueva_letra;
    int i = 0;
    int fallos = N_FALLOS;
    int letras_usadas = 0;
    for (i = 0; i < strlen(palabra_actual); i++) {
        palabra_actual[i] = '_';
    }
    // Inicializamos la palabra_actual con guiones bajos
    printf("Recuerda que dispones de %d fallos.\n", fallos);
    printf("La palabra tiene %d letras: %s\n",
           (int) strlen(palabra), palabra_actual);
    while (fallos > 0) {
        printf("Prueba una letra: ");
        scanf(" %c", &nueva_letra);
        if (buscar_caracter(palabra, palabra_actual, nueva_letra) > 0) {
            printf("Bien! Has encontrado una letra.\n");
        } else {
            printf("Lo siento... has fallado.\n");
            fallos--;
        }
        printf("Te quedan %d fallos\n", fallos);
        sprintf(letras, "%s %c", letras, nueva_letra);
        printf("Hasta ahora has utilizado estas letras: %s\n", letras);
        printf("\t%s\n", palabra_actual);
        if (strcmp(palabra, palabra_actual) == 0) break;
    }
    printf("\nHAS %s EL JUEGO", fallos > 0 ? "GANADO" : "PEDIDO");
    return 0;
}

/**
 * Funcion auxiliar para buscar un caracter en la palabra correcta
 * Y marcarlo en la palabra adivinada
 * @param correcta : es la palabra oculta
 * @param adivinada : es la palabra adivinada en su estado actual
 * @param caracter : el caracter buscado
 * @return el numero de ocurrencias de la letra
 */
int buscar_caracter(char correcta[], char adivinada[], char caracter) {
    int i;
    int encontrados = 0;
    for (i = 0; i < strlen(correcta); i++) {
        if (correcta[i] == caracter) {
            // el caracter esta en la palabra oculta
            encontrados++;
            adivinada[i] = caracter;    // insertamos el caracter
        };
    }
    return encontrados;
}

