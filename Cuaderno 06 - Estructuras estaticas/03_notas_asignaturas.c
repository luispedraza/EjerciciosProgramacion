#include <stdio.h>

struct alumno {
    char nombre[20];
    float notas[5];
};

int main(int argc, const char *argv[]) {
    int i, j;
    float media[10];
    int contador;

    struct lista alumnos[10];
    printf("Por favor introduzca los datos de los alumnos y el nombre, si no tiene nota en las asignaturas por favor introduzca 0:\n");
    for (i = 0; i < 10; i++) {
        printf("Nombre del alumno %d: ", i + 1);
        scanf("%s", alumnos[i].nombre);
        for (j = 0; j < 5; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alumnos[i].notas[j]);
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%s \t", alumnos[i].nombre);
        contador = 0;
        media[i] = 0;
        for (j = 0; j < 5; j++) {
            printf("%f \t", alumnos[i].notas[j]);
            if (alumnos[i].notas[j] > 0) {
                media[i] = media[i] + alumnos[i].notas[j];
                contador++;
            }
        }
        media[i] = media[i] / contador;
        printf("\n");
    }
    for (i = 0; i < 10; i++) {
        printf("%s \t", alumnos[i].nombre);
        printf("%f", media[i]);
        printf("\n");
    }
    return 0;
}
