/* Algoritmo de Euclides para calcular MCD.
 * Fuente: Structured Testig: a testing methdology using the cyclomatic complexity metric
 * p. 7
 * https://es.wikipedia.org/wiki/Algoritmo_de_Euclides
 */

// #define NDEBUG
#include <stdio.h>
#include <assert.h>
#define A 100
#define B 26

int euclides (int m, int n) {
    /*  Asumimos que m y n son ambos mayors que 0.
        Devolvermos el mayor divisor común.
        Por eficiencia obligamos m >= n.
    */
    int r;
    if (n > m) {
        r = m;
        m = n;
        n = r;
    }
    r = m % n;  // Este es el código correcto
    // r = m % n + 2;   // Esto podría ser un error en el código
    while (r != 0) {
        m = n;
        n = r;
        r = m % n;
    }
    return n;
}
/**
 * Ejemplo sencillo de prueba de caja blanca
 */
void prueba_caja_blanca_C1() {
    printf ("\nPrueba del camino 1\n");
    assert(euclides(10, 5) == 5);
    assert(euclides(10, 10) == 10);
    printf ("\nOK\n");
}
/**
 * Ejemplo sencillo de prueba de caja blanca
 */
void prueba_caja_blanca_C2() {
    printf ("\nPrueba del camino 2\n");
    assert(euclides(5, 10) == 5);
    assert(euclides(4, 8) == 4);
    printf ("\nOK\n");
}
/**
 * Ejemplo sencillo de prueba de caja blanca
 */
void prueba_caja_blanca_C3() {
    printf ("\nPrueba del camino 3\n");
    assert(euclides(14, 6) == 2);
    assert(euclides(30, 12) == 6);
    printf ("\nOK\n");
}
/**
 * Ejemplo sencillo de prueba de caja negra
 * Comprobamos el resultado de las funciones
 */
void prueba_caja_negra() {
    int entradaA[] = {12, 18, 100, 26};
    int entradaB[] = {18, 12, 26, 100};
    int salida[] = {6, 6, 2, 2};
    for (int i = 0; i<4; i++) {
        assert(euclides(entradaA[i], entradaB[i]) == salida[i]);
    }
}

int main() {
    printf ("El MCD de %d y %d es: %d", A, B, euclides(A, B));
    prueba_caja_negra();
    prueba_caja_blanca_C1();
    prueba_caja_blanca_C2();
    prueba_caja_blanca_C3();

}
