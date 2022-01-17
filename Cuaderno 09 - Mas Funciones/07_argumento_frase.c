#include <stdio.h>

int main(int argc, char **argv) {
    char filename[] = "mifrase.txt";
    FILE *pf = fopen(filename, "w");
    if (pf) {
        for (int i = 1; i < argc; i++) {
            // Imprimimos los argumentos separados por un espacio
            fprintf(pf, "%s ", argv[i]);
        }
        fputs("\n", pf);
        fclose(pf);
    } else {
        printf("No se pudo abrir el archivo.");
    }
    return 0;
}