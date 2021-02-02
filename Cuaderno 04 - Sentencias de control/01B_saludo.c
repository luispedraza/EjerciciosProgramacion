/**
 * Escribe un programa que imprima por pantalla "Hola, ¿Qué tal estás, Nombre?"
 * donde Nombre es el nombre del usuario que se solicita por teclado.
 */

#include <stdio.h>  // archivo de cabecera necesario para funciones de E/S
#define LIMITE 30

int main() {
    char nombre[LIMITE];
    printf ("Introduce tu nombre: ");
    // varias opciones de lectura de una cadena que contiene espacios
    // Dejar sin comentar solo una:
    // scanf(" %[^\n]", nombre);
    gets(nombre);
    printf ("Hola, ¿Qué tal estás, %s?", nombre);
    return 0;
}
