/*
 * Un programa que escribe datos formateados en un fichero empleando fprintf
 * Crearemos una tabla de registros
 */

#include <stdio.h>

#define L_FABRICANTE 15
#define L_MODELO 20
#define FICHERO "telefonos.txt"

struct telefono {
    int id;
    char fabricante[L_FABRICANTE];
    char modelo[L_MODELO];
    int memoria;
    int almacenamiento;
    float precio;
} infoTelefonos[] = {
        {1, "Xiaomi",  "Redmi Note 9S",    6, 128,   229},
        {2, "Samsung", "Galaxy A51",       4, 128,   225},
        {3, "Xiaomi",  "Redmi Note 9 Pro", 6,   128, 269},
        {4, "Xiaomi",  "Mi 10T 5G",        6,   128, 499}
};

int main() {
    FILE *pf = fopen(FICHERO, "w");
    if (pf == NULL) {
        printf ("No se ha podido abrir el archivo");
        return -1;
    }
    for (int i = 0; i < 4; i++) {
        fprintf (pf, "%5d\t%15s\t%20s\t%2d\t%3d\t%.2f\n",
                 infoTelefonos[i].id,
                 infoTelefonos[i].fabricante,
                 infoTelefonos[i].modelo,
                 infoTelefonos[i].memoria,
                 infoTelefonos[i].almacenamiento,
                 infoTelefonos[i].precio
                 );
    }

    return 0;
}