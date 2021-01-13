/*
 * Ejemplo de uso de la función ferror()
 */

#include <stdio.h>

#define NOMBRE_ARCHIVO "08.09.file.txt"
#define CADENA "cadena que queremos escribir\n"

int main() {
    // Abrimos el archvo en modo lectura:
    FILE *pf = fopen(NOMBRE_ARCHIVO, "r");
    int error = 0;
    if (pf == NULL) {
        printf ("Error al abrir el archivo %s\n", NOMBRE_ARCHIVO);
    } else {
        fprintf(pf, "%s", CADENA);
        error = ferror(pf);
        if (error != 0) {
            printf ("Error de escritura en el archivo (código: %d)\n", ferror(pf));
            // Se producirá un error porque intentamos escribir en un archivo de solo lectura
            clearerr(pf);   // Hay que "limpiar" el error
        }
        fclose(pf); // Hay que cerrar el archivo al final
    }

    return 0;
}