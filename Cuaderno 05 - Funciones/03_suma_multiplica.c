/*
 * Priograma con un menú para sumar o multiplicar dos números
 */
#include <stdio.h>

int menu();

int main(int argc, const char *argv[]) {
    int num1, num2, resultado;
    printf("Introduce numero 1: \n");
    scanf("%d", &num1);
    printf("Introduce numero 2: \n");
    scanf("%d", &num2);
    switch (menu()) {
        case 1:
            resultado = num1 * num2;
            printf("El resultado de la multiplicación es: %d \n", resultado);
            break;
        case 2:
            resultado = num1 + num2;
            printf("EL resultado de la suma es: %d \n", resultado);
            break;
        default:
            printf("La opción seleccionada es incorrecta \n");
    }
    return 0;
}

int menu() {
    int opcion;
    printf("Selecciones la opción deseada: \n");
    printf("1: Multiplicación \n");
    printf("2: Suma \n");
    scanf("%d", &opcion);
    return opcion;
}