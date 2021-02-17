/**
Ejemplo de la figura 4-4 de McCabe
*/

#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;
    if (i > 0 && j > 0) {
        while (i > j) {
            if (i % 2 && j % 2)
                printf("%d\n", i);
            else
                printf("%d\n", j);
            i--;
        }
    }
}