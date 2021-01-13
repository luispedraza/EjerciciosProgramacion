/*Implementar un programa con:
una función menú que muestre la posibilidad de sumar o multiplicar,
una función que solicite dos números que se ingresan por teclado y
una función multiplicar y
otra función para sumar operando con los dos números.
 */
#include <stdio.h>

/*prototipos de funciones */
int solicitar_numero();

int menu();

int multiplica(int a, int b);

int suma(int a, int b);

/*función main*/
int main() {
    int num1, num2, resultado;
    num1 = solicitar_numero();
    num2 = solicitar_numero();
    switch (menu()) {
        case 1:
            resultado = multiplica(num1, num2);
            printf("El resultado de la multiplicación es: %d \n", resultado);
            break;
        case 2:
            resultado = suma(num1, num2);
            printf("EL resultado de la suma es: %d \n", resultado);
            break;
        default:
            printf("La opción seleccionada es incorrecta \n");
    }
    return 0;
}

/* desarrollo de funciones */
int solicitar_numero() {
    int num;
    printf("Introduzca un numero \n");
    scanf("%d", &num);
    return (num);
}

int menu() {
    int opt;
    printf("Seleccione la opción deseada: \n");
    printf("1: Multiplicación \n");
    printf("2: Suma \n");
    scanf("%d", &opt);
    return opt;
}

int multiplica(int a, int b) {
    return (a * b);
}

int suma(int a, int b) {
    return (a + b);
}