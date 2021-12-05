/*
 * Programa que abre un archivo de entre
 * tres opciones disponibles y muestra su contenido.
 */

#include <stdio.h>

#define N_ARCHIVOS 3

char *archivos[N_ARCHIVOS] = {"novelas_ejemplares.txt", "chistes.txt", "colores.txt"};

/**
 * Muestra el menú de opciones al usuario
 * @return: selección del usuario
 */
int menu() {
    int seleccion = 0;
    printf("Selecciona el archivo que deseas abrir: \n");
    for (int i = 0; i < N_ARCHIVOS; i++)
        printf("%d: %s\n", i + 1, archivos[i]);
    scanf("%d", &seleccion);
    return seleccion;
}

/**
 * Esta función lee el contenido de texto de un archivo
 * @param nombre: nombre del archivo que se desea leer
 */
void leerArchivo(const char *nombre) {
    char buffer[50];
    FILE *f = fopen(nombre, "r");
    if (f == NULL) {
        printf("No se ha podido abrir el archivo");
        return;
    }

    while (!feof(f)) {
        // esto se hace hasta que lleguemos al final del fichero
        fgets(buffer, 50, f);
        printf("%s", buffer);
    }
}

int main() {
    int seleccion = menu();
    if (seleccion < 1 || seleccion > N_ARCHIVOS) {
        printf("La opción seleccionada no está disponible\n");
        return -1;
    }
    leerArchivo(archivos[seleccion - 1]);
}