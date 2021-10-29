/*Implementar un programa con:
una función menú que muestre la posibilidad de sumar o multiplicar,
una función que solicite dos números que se ingresan por teclado y
una función multiplicar y
otra función para sumar operando con los dos números.
 */
#include <stdio.h>

/*prototipos de funciones */
int menu();
void solicitar_valores(int* x, int* y);
int multiplica(int a, int b);
int suma(int a, int b);

/*función main*/
int main() {
    int num1, num2, resultado;
    solicitar_valores(&num1, &num2);
    switch (menu()) {
        case 1:
            resultado = multiplica(num1, num2);
            printf("El resultado de la multiplicacion es: %d \n", resultado);
            break;
        case 2:
            resultado = suma(num1, num2);
            printf("EL resultado de la suma es: %d \n", resultado);
            break;
        default:
            printf("La opcion seleccionada es incorrecta \n");
    }
    return 0;
}

/* implementación de las funciones */

int menu() {
    int opt;
    printf("Seleccione la opcion deseada: \n");
    printf("1: multiplicar \n");
    printf("2: sumar \n");
    scanf("%d", &opt);
    return opt;
}

void solicitar_valores(int* x, int* y) {
    printf("Introduzca el primer valor:\n");
    scanf("%d", x);
    printf("Introduzca el segundo valor:\n");
    scanf("%d", y);
}

int multiplica(int a, int b) {
    return (a * b);
}

int suma(int a, int b) {
    return (a + b);
}