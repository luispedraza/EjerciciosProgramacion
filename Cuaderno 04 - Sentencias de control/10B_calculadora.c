/**
 * Programa que realiza cálculos sobre dos valores
 */
#include<stdio.h>

int main() {
    int n1, n2, op, res;
    printf("Introduce el primer valor: ");
    scanf("%d", &n1);
    printf("Introduce el segundo valor: ");
    scanf("%d", &n2);
    printf("Introduce operacion suma(1), resta(2), producto(3), division(4):\n");
    scanf("%d", &op);
    switch (op) {
        case 1:
            res = n1 + n2;
            printf("%d + %d = %d\n", n1, n2, res);
            break;
        case 2:
            res = n1 - n2;
            printf("%d - %d = %d\n", n1, n2, res);
            break;
        case 3:
            res = n1 * n2;
            printf("%d * %d = %d\n", n1, n2, res);
            break;
        case 4:
            res = n1 / n2;
            printf("%d / %d = %d\n", n1, n2, res);
    }
    return 0;
}

