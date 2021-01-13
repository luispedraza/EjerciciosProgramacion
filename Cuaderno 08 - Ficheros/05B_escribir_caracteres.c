/*
 * Este programa escribe datos en un fichero carácter a carácter.
 * Otra solución, empleando aritmética de punteros
 */

#include <stdio.h>
#include <string.h>

#define FRASE "El contenido que queremos insertar en el fichero\nseparado en dos líneas.";
#define NOMBRE_ARCHIVO "caracteres.txt"

int main() {
    FILE *pf;
    char *frase, *cursor;
    int i=0;
    cursor = frase = FRASE;
    char c = '\0';
    pf = fopen(NOMBRE_ARCHIVO, "w");  // Abrimos para escribir
    if (pf == NULL) {
        printf ("No se ha podido abrir el fichero.\n");
        return -1;
    }
    do {
        c = *(cursor+(i++));
        printf ("Agregando el carácter: \"%c\"\n", c);
        fputc(c, pf);
        if (ferror(pf)) {
            printf ("Se ha producido un error al escribir el carácter %c en la posición %d.\n",
                    c, i);
        }
    } while (c != '\0');
    fclose (pf);

    return 0;
}