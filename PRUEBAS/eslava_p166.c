/* Ejemplo incorrecto de Eslava en página 166 */
#include<stdio.h>

int main(void) {
    struct ficha {
        int balance;
        char nombre[80];
    } *p;

    printf("Nombre: ");
    gets(p->nombre);
    printf("\nBalance: ");
    scanf(" %d", &p->balance);
    printf("%s", p->nombre);
    printf("%d", p->balance);
    getchar();
    return 0;
}