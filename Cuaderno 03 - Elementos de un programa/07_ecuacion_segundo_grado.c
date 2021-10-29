/**
* Este programa permite resolver la siguiente ecuacion
 * de segundo grado ax^2 + bx + c = c
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a = 2 , b = 5, c = 2;
    float raiz = sqrt(b * b - 4 * a * c);
    float denominador = 2 * a;
    float x1 = (-b + raiz) / denominador;
    float x2 = (-b - raiz) / denominador;
    printf("Las raices de la ecuacion son:\n");
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
    return 0;
}