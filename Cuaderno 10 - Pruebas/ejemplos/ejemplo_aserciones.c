/* assert example */
// Fuente: http://www.cplusplus.com/reference/cassert/assert/

// #define NDEBUG

#include <stdio.h>      /* printf */
#include <assert.h>     /* assert */

void print_number(int *myInt) {
    assert (myInt != NULL);
    printf("%d\n", *myInt);
}

int main() {
    int a = 10;
    int *puntero1 = NULL;
    int *puntero2 = NULL;

    puntero2 = &a;

    print_number(puntero1); // Esta llamada tiene problemas
    print_number(puntero2); // Esta llamada no tiene problemas
    printf("Programa finalizado\n");
    return 0;
}