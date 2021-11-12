/*
 * Convierte una cadena a mayusculas
 */

#include <stdio.h>
#include <string.h>

void convertir(char texto[]);

int main() {
    char cadena[100];
    printf("Introduzca un texto: ");
    scanf(" %[^\n]%*c", cadena);
    convertir(cadena);
    printf("%s", cadena);

    return 0;
}

void convertir(char texto[]) {
    int i;
    for (i = 0; i < strlen(texto); i++) {
        if (texto[i] >= 97 && texto[i] <= 122) {
            // es una vocal en minusculas
            texto[i] -= 32;
        }
    }
}

