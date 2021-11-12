/**
 * Programa que convierte una constante de tipo real o double
 * (como PI) a una cadena de texto
 * 3.14159265359 -> "3.14159265359"
 * Implementacion de nuestro algoritmo
 */

#include <stdio.h>

#define VALOR   3.14159265359
#define PRECISION 10 // precision decimal buscada

int main(void) {
    double valor = VALOR;
    char str[100];
    int cifras_enteras = 0;       // numero de cifras de la parte entera
    int caracteres_totales = 0;
    int i = 0;

    /* 1. Dividimos entre 10 hasta que la parte entera sea 0
     * El numero de divisiones es el numero de cifras enteras */
    while ((int) valor != 0)  {
        cifras_enteras++;
        valor /= 10;
    }
    printf("Cifras enteras: %d\n", cifras_enteras); // para comprobacion


    /* 2. Multiplicamos por 10 hasta alcanzar la precision deseada.
     * Agregamos las unidades de la parte decimal en cada iteracion.
     * Incluimos el separador en la iteracion correcta. */
    if (cifras_enteras == 0) {
        str[0] = '0';
        str[1] = '.';
        caracteres_totales = PRECISION;
        i = 2;
    } else {
        caracteres_totales = cifras_enteras + 1 + PRECISION;
    }
    while (caracteres_totales >= 0)  {
        valor *= 10;
        int unidades = (int) valor;
        valor -= unidades;
        // tenemos en cuenta codigos ASCII:
        // https://elcodigoascii.com.ar/
        str[i] = unidades + 48; // conversion a char
        i++;
        if (i == cifras_enteras) {
            str[i] = '.';
            i++;
            caracteres_totales--;
        }
        caracteres_totales--;
    }
    // terminacion de cadena:
    str[i] = '\0';

    /* Mostramos el resultado */
    printf("Impresion en formato decimal: %.10f\n", VALOR);
    printf("Impresion como cadena de caracteres: %s\n", str);
}
