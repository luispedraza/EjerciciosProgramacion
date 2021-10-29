/*
 * Priograma con un menú para sumar o multiplicar dos números
 */
#include <stdio.h>

// Cabecera de la funcion menu()
int menu();

int main(int argc, const char *argv[]) {
    int num1, num2, resultado;
    printf("Introduce valor 1: \n");
    scanf("%d", &num1);
    printf("Introduce valor 2: \n");
    scanf("%d", &num2);
    switch (menu()) {
        case 1:
            resultado = num1 * num2;
            printf("El resultado de la multiplicacion es: %d \n", resultado);
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

/*
 * Implementacion de la funcion menu()
 * Esta función devuelve la opción que decide el usuario
 */
int menu() {
    int opcion;
    printf("Seleccione la opcion deseada: \n");
    printf("1: multiplicar \n");
    printf("2: sumar \n");
    scanf("%d", &opcion);
    return opcion;
}