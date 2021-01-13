/*
Programa en C que define un puntero a una estructura y los pasa
como argumento a una función
*/

#include <stdio.h>

/* Estructura capaz de almacenar información de una persona */
typedef struct {
    char nombre[50];    // Nomnbre propio de la persona
    char apellido1[50]; // Primer apellido de la persona
    char apellido2[50]; // Segundo apellido de la persona
    int edad;           // Edad de la persona
} Persona;

void imprime_persona(Persona *p);

void actualiza_edad(Persona *p, int nueva_edad);

int main() {
    Persona antonio = {
            "Antonio",
            "Rodriguez",
            "Garcia",
            58
    };
    imprime_persona(&antonio);
    actualiza_edad(&antonio, 28);
    imprime_persona(&antonio);
}

/*
 * Función que imprime en pantalla la información de una personas.
 */
void imprime_persona(Persona *p) {
    printf("\n========================================\n");
    printf("Apellidos, Nombre: %s %s, %s\n",
           p->apellido1,
           p->apellido2,
           p->nombre);
    printf("Edad: %d\n", p->edad);
}

/*
 * Actualiza la edad de una personas
 */
void actualiza_edad(Persona *p, int nueva_edad) {
    p->edad = nueva_edad;
}

