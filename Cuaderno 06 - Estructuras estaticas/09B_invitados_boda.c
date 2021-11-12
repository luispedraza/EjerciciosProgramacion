#include <stdio.h>

#define N_INVITADOS 20 // maximo 20 asistentes

typedef struct {
    char nombre[20];
    char apellido[20];
    char tipo;   // relacion con los novios: 'F', 'A', 'T', 'O'
} TInvitado;

/* Funcion de ayuda para comprobar tipo de invitado */
int check_tipo(char letra, const char opciones[]);

int main() {
    // POSIBLES RELACIONES
    const char RELACIONES[] = "FATO";
    const char CONTINUAR[] = "SN";
    TInvitado invitados[N_INVITADOS];
    char tipo_invitado;
    int i = 0;  // contador de invitados
    int j;
    char continuar = 'S';
    while (i < N_INVITADOS && continuar == 'S') {
        printf("Datos del invitado %d\n", i);
        printf("\tNombre: ");
        scanf("%[^\n]%*c", invitados[i].nombre);
        printf("\tApellido: ");
        scanf("%[^\n]%*c", invitados[i].apellido);
        do {
            printf("\tTipo [F, A, T, O]: ");
            scanf("%c%*c", &tipo_invitado);
            tipo_invitado = check_tipo(tipo_invitado, RELACIONES);
            if (tipo_invitado == -1) {
                printf("ERROR: La opcion no es posible.\n");
            } else invitados[i].tipo = tipo_invitado;
        } while (tipo_invitado == -1);
        i++;    // se ha agregado el invitado
        if (i < N_INVITADOS) {
            // Comprobamos si se desea agregar uno nuevo
            do {
                printf("\nDesea agregar otro invitado? [S/N]: ");
                scanf("%c%*c", &continuar);
                continuar = check_tipo(continuar, CONTINUAR);
            } while (continuar != 'S' && continuar != 'N');
        }
    }
    /* Introducidos los datos: creamos resultados ordenados */
    printf ("\nLista de invitados:\n");
    for (j = 0; j < i; j++) {
        printf("%s, %s (%c)\n",
               invitados[j].apellido,
               invitados[j].nombre,
               invitados[j].tipo);
    }
    return 0;
}

int check_tipo(char letra, const char opciones[]) {
    int i;
    // Convertimos a mayuscula si es necesario
    // teniendo en cuenta el codigo ASCII:
    // https://elcodigoascii.com.ar/
    if (letra >= 97) letra -= 32;
    for (i = 0; i < 4; i++) {
        if (opciones[i] == letra) return letra;
    }
    return -1; // No es una opcion disponible
}