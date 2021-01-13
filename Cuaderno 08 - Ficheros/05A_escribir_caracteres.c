/*
 * Este programa escribe datos en un fichero carácter a carácter
 */

#include <stdio.h>
#include <string.h>

#define FRASE "El contenido que queremos insertar en el fichero\nseparado en dos líneas.";
#define NOMBRE_ARCHIVO "caracteres.txt"

int main() {
    FILE *pf;
    char *frase = FRASE;
    int i;
    pf = fopen(NOMBRE_ARCHIVO, "w");  // Abrimos para escribir
    if (pf == NULL) {
        printf ("No se ha podido abrir el fichero.\n");
        return -1;
    }
    for (i=0; i< strlen(frase); i++) {
        char c = frase[i];
        printf ("Agregando el carácter: \"%c\"\n", c);
        fputc(c, pf);
        if (ferror(pf)) {
            printf ("Se ha producido un error al escribir el carácter %c en la posición %d.\n",
                    c, i);
        }
    }
    fclose (pf);
    
    return 0;
}