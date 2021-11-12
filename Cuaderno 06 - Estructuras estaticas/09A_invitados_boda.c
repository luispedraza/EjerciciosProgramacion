#include <stdio.h>

#define N_INVITADOS 3 // maximo 20 asistentes

typedef struct {
    char nombre[20];
    char apellido[20];
    char tipo;   // relacion con los novios: 'F', 'A', 'T', 'O'
} TInvitado;

int main() {
    TInvitado invitados[N_INVITADOS];
    int n_invitados;
    int i = 0;  // contador de invitados
    int j;
    printf("Indique el numero de invitados (maximo %d): ", N_INVITADOS);
    scanf(" %d%*c", &n_invitados);

    while (i < n_invitados) {
        printf("Datos del invitado %d\n", i);
        printf("\tNombre: ");
        scanf("%[^\n]%*c", invitados[i].nombre);
        printf("\tApellido: ");
        scanf("%[^\n]%*c", invitados[i].apellido);
        printf("\tTipo [F, A, T, O]: ");
        scanf("%c%*c", &invitados[i].tipo);
        i++;    // se ha agregado el invitado
    }
    /* Introducidos los datos: creamos resultados ordenados */
    printf("\nLista de invitados:\n");
    for (j = 0; j < i; j++) {
        printf("%s, %s (%c)\n",
               invitados[j].apellido,
               invitados[j].nombre,
               invitados[j].tipo);
    }
    return 0;
}
