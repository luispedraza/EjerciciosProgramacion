/*
 * Programa que escribe y recupera registros empleando un archivo binario.
 */

#include <stdio.h>
#include <string.h>

#define ARCHIVO "10_personas.dat"    // Archivo que contiene los datos
#define TAMANIO_STRING 40

typedef struct {
    char nombre[TAMANIO_STRING];
    int edad;
    char ciudad[TAMANIO_STRING];
} TPersona;

void inputPersona(TPersona *p); // Solicita al usuario datos de una persona
void outputPersona(TPersona *p);    // Muestra en pantalla información de una persona

int main(int argc, char **argv) {
    FILE *file; // arachivo que vamos a utilizar

    if (argc < 2) {
        printf("No se han suministrado los suficientes parámetros.\n");
        printf("w: escribir datos de personas.\n");
        printf("r: leer datos la persona en el registro N.\n");
        return -1;
    }
    if (strcmp(argv[1], "r") == 0) {
        int n;
        TPersona persona;
        file = fopen(ARCHIVO, "rb");
        printf("Indique el registro que desea recuperar: ");
        scanf("%i%*c", &n);
        printf("Recuperando el registro %d:\n", n);
        fseek(file, n*sizeof(TPersona), SEEK_SET);
        fread(&persona, sizeof(TPersona), 1, file);
        printf ("Registro recuperado: ");
        outputPersona(&persona);

    } else if (strcmp(argv[1], "w") == 0) {
        int n;
        file = fopen(ARCHIVO, "ab");
        printf("Indique cuantos registros desea insertar: ");
        scanf("%i%*c", &n);
        for (int i = 0; i < n; i++) {
            TPersona unaPersona;
            inputPersona(&unaPersona);
            printf("Guardando... ");
            outputPersona(&unaPersona);
            fwrite(&unaPersona, sizeof(TPersona), 1, file);
        }
    }
    fclose(file);

    return 0;
}

void inputPersona(TPersona *p) {
    printf("Nombre completo: ");
    scanf("%[^\n]%*c", p->nombre);
    printf("Edad: ");
    scanf("%i%*c", &p->edad);
    printf("Ciudad de nacimiento: ");
    scanf("%[^\n]%*c", p->ciudad);
}

void outputPersona(TPersona *p) {
    printf("%s, %d años, nacido en %s\n",
           p->nombre,
           p->edad,
           p->ciudad);
}