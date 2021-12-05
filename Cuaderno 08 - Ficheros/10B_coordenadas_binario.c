/**
* Programa que EDITA información de coordenadas
* en un fichero de TEXTO
*/

#include <stdio.h>
#include <string.h>

#define L 30
#define FILE_NAME "coordenadas.bin"

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

void imprimeCoordenada(TCoordenada coord, FILE *lugar) {
    fprintf(lugar, "%30s%20.3f%20.3f\n",
            coord.nombre, coord.lat, coord.lon);
}

int main() {
    FILE *pFile = fopen(FILE_NAME, "ab");
    TCoordenada coord;
    int i = 0;  // ID del registro al mostrar en pantalla
    int sel;    // ID del registro a modificar
    if (pFile) {
        while (pideCoordenada(&coord)) {
            fwrite(&coord, sizeof(TCoordenada), 1, pFile);
        }
        fclose(pFile);
    } else {
        printf("No se ha podido abrir el archivo: %s", FILE_NAME);
    }
    pFile = fopen(FILE_NAME, "r+b");
    if (pFile) {
        // Leemos la información de manera secuencial
        while (fread(&coord, sizeof(TCoordenada), 1, pFile)) {
            i++;
            printf("Registro %d: ", i);
            imprimeCoordenada(coord, stdout);
        }
        printf("Registro a modificar (1-%d): ", i);
        scanf(" %d%*c", &sel);
        // Posicionamos el cursor en el registro
        fseek(pFile, (sel - 1) * sizeof(TCoordenada), SEEK_SET);
        // Pedimos la nueva informacion:
        pideCoordenada(&coord);
        fwrite(&coord, sizeof(TCoordenada), 1, pFile);
        fclose(pFile);
    } else {
        printf("No se ha podido abrir el archivo: %s", FILE_NAME);
    }

    return 0;
}
