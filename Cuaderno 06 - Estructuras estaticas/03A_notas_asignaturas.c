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

int main() {
    int i;   // variable contador de alumnos
    TAlumno alumnos[N_ALUMNOS];

    /* Pedir los datos */
    printf("Informacion de los alumnos:\n");
    for (i = 0; i < N_ALUMNOS; i++) {
        printf("Alumno %d\n", i);
        printf("\tNombre: ");
        scanf(" %s", alumnos[i].nombre);
        printf("\tApellido: ");
        scanf(" %s", alumnos[i].apellido);
        printf("\tNota Evaluación Continua: ");
        scanf(" %f", &alumnos[i].ec);
        printf("\tNota examen: ");
        scanf(" %f", &alumnos[i].ex);
        // Aqui podría calcularse ya la nota final
        // Ahorraríamos un bucle
    }
    /* calcular de notas finales */
    for (i = 0; i < N_ALUMNOS; i++) {
        if (alumnos[i].ex >= 5) {
            alumnos[i].final = PESO_EC * alumnos[i].ec + PESO_EX * alumnos[i].ex;
        } else {
            alumnos[i].final = PESO_EC * alumnos[i].ec;
        }
    }
    /* Mostrar los resultados */
    for (i = 0; i < N_ALUMNOS; i++) {
        printf("\nAlumno: %s, %s\n", alumnos[i].apellido, alumnos[i].nombre);
        printf("\tE.C.: %.2f\n", alumnos[i].ec);
        printf("\tExamen: %.2f\n", alumnos[i].ex);
        printf("\tNota final: %.2f\n", alumnos[i].final);
    }
    return 0;
}
