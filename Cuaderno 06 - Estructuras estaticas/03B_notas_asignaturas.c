/*
 * Solución alternativa con distintas funciones
 */
#include <stdio.h>

#define N_ALUMNOS 5   // Numero de alumnos
#define PESO_EC 0.4
#define PESO_EX 0.6

typedef struct alumno {
    char nombre[20];
    char apellido[20];
    float ec;       // calificacion evaluacion continua
    float ex;       // calificacion examen
    float final;    // calificacion final
} TAlumno;

void pedir_alumnos(TAlumno alumnos[]);
void calcular_notas (TAlumno alumnos[]);
void mostrar_alumnos(TAlumno alumnos[]);

int main() {
    TAlumno alumnos[N_ALUMNOS];
    pedir_alumnos(alumnos);
    calcular_notas(alumnos);
    mostrar_alumnos(alumnos);
    return 0;
}

void pedir_alumnos(TAlumno alumnos[]){
    /* Pedir los datos */
    int i;
    printf("Informacion de los alumnos:\n");
    for (i = 0; i < N_ALUMNOS; i++) {
        printf("Alumno %d\n", i);
        printf("\tNombre: ");
        scanf(" %[^\n]%*c", alumnos[i].nombre);
        printf("\tApellido: ");
        scanf(" %[^\n]%*c", alumnos[i].apellido);
        printf("\tNota Evaluación Continua: ");
        scanf(" %f", &alumnos[i].ec);
        printf("\tNota examen: ");
        scanf(" %f", &alumnos[i].ex);
    }
}
void calcular_notas (TAlumno alumnos[]){
    int i;
    /* calcular de notas finales */
    for (i = 0; i < N_ALUMNOS; i++) {
        if (alumnos[i].ex >= 5) {
            alumnos[i].final = PESO_EC * alumnos[i].ec + PESO_EX * alumnos[i].ex;
        } else {
            alumnos[i].final = PESO_EC * alumnos[i].ec;
        }
    }
}
void mostrar_alumnos(TAlumno alumnos[]){
    int i;
    /* Mostrar los resultados */
    for (i = 0; i < N_ALUMNOS; i++) {
        printf("\nAlumno: %s, %s\n", alumnos[i].apellido, alumnos[i].nombre);
        printf("\tE.C.: %.2f\n", alumnos[i].ec);
        printf("\tExamen: %.2f\n", alumnos[i].ex);
        printf("\tNota final: %.2f\n", alumnos[i].final);
    }
}