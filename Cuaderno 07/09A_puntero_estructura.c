/*
 * Programa que define un puntero a una estructura y lo pasa
 * como argumento a una función (solución en ideas clave
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char cadena[30];
    int numero;
} MiEstructura;

// Función que reserva memoria para una instancia de esta estructura
// Recibe una referencia a un puntero, es decir:
// La dirección de memoria de una variable que es un puntero (dirección) a una estructura
// Por tanto tenemos una indirección doble.
void asigna_memoria (MiEstructura **p);

int main() {
    MiEstructura *p_estructura = NULL;
    asigna_memoria(&p_estructura);
    printf("Contenido de la estructura: \n");
    printf("Cadena: %s\nValor entero: %5d\n",
           p_estructura->cadena,
           p_estructura->numero);
}

void asigna_memoria (MiEstructura **p) {
    printf ("Reservando espacio para %lu bytes de informacion...\n", sizeof(MiEstructura));
    *p = (MiEstructura*) malloc(sizeof(MiEstructura));
    if (*p != NULL) {
        strcpy((*p)->cadena, "Cadena inicial");
        (*p)->numero = 17;
    } else {
        printf("No se ha podido reservar memoria para la variable\n.");
    }
}