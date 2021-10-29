/**
 * Escribe un programa que imprima por pantalla "Hola, te saludo [NOMBRE]"
 * donde Nombre es el nombre del usuario que se solicita por teclado.
 * Documentación de scanf() https://www.cplusplus.com/reference/cstdio/scanf/
 * Documentación de gets() https://www.cplusplus.com/reference/cstdio/gets/
 */

#include <stdio.h>  // archivo de cabecera necesario para funciones de E/S
#define LIMITE 30

int main() {
    char nombre[LIMITE];
    printf ("Introduce tu nombre: ");
    // Vemos dos opciones de lectura de una cadena que contiene espacios
    // Dejar sin comentar solo una:
    // scanf(" %[^\n]", nombre);
    gets(nombre);
    printf ("Hola, te saludo %s", nombre);
    return 0;
}
