/* Ejemplo incorrecto de Eslava en página 165 */
#include<stdio.h>

int main(void) {
    char *apellidos;
    printf("Introducir apellidos: ");
    gets(apellidos); // Ojo con esto. Apellidos no apunta a nada.
    printf("Tus apellidos son: %s", apellidos);
    printf("La dirección de memoria es: %p", apellidos);
    getchar();
    return 0;
}