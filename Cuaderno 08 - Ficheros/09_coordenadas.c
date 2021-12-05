/**
* Programa que GUARDA información de coordenadas
* en un fichero de TEXTO
*/

#include <stdio.h>
#include <string.h>

#define L 30
#define FILE_NAME "coordenadas.txt"

typedef struct {
    float lat;
    float lon;
    char nombre[L];
} TCoordenada;

int pideCoordenada(TCoordenada *coord) {
    char nombre[L + 1];
    printf("Introduzca el registro (intro para salir):\n");
    printf("Nombre del lugar: ");
    fgets(nombre, L + 1, stdin);
    if (strlen(nombre) == 1) {
        // Solo hay retorno de línea
        return 0;
    }
    sscanf(nombre, "%[^\n]", coord->nombre);
    printf("Latitud: ");
    scanf(" %f%*c", &coord->lat);
    printf("Longitud: ");
    scanf(" %f%*c", &coord->lon);
    return 1;
}

int main() {
    FILE *pFile = fopen(FILE_NAME, "w");
    TCoordenada coordenada;
    if (pFile) {
        while (pideCoordenada(&coordenada)) {
            fprintf(pFile, "%30s%20.3f%20.3f\n",
                    coordenada.nombre, coordenada.lat, coordenada.lon);
        }
        fclose(pFile);
    } else {
        printf("No se ha podido abrir el archivo: %s", FILE_NAME);
    }

    return 0;
}
