/**
* Programa que calcula:
 * - El perimetro de un cuadrado
 * - El area de ese cuadrado
 * - El perimetro del circulo circunscrito
 * - El area del circulo circunscrito
*/

#include <stdio.h>
#define PI  3.14159265359

float perimetro_cuadrado (float L) {
    return 4*L;
}

float area_cuadrado(float L) {
    return L*L;
}

float perimetro_circulo_inscrito(float L) {
    return PI*L;
}

float area_circulo_inscrito(float L) {
    float r = L/2;
    return PI*r*r;
}

int main() {
    float L;
    printf ("Dame el lado del cuadrado, L:\n");
    scanf ("%f", &L);
    printf ("Perimetro del cuadrado: %.2f\n", perimetro_cuadrado(L));
    printf ("Area del cuadrado: %.2f\n", area_cuadrado(L));
    printf ("Perimetro del circulo: %.2f\n", perimetro_circulo_inscrito(L));
    printf ("Area del circulo: %.2f\n", area_circulo_inscrito(L));
}
