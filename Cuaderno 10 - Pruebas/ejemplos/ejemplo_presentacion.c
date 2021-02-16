#include <stdio.h>

void algoritmo (a, b, c) {
    if (a == 10) {
        if (b>c) {
            a = b;
        } else {
            a = c;
        }
    }
    printf ("%d, %d, %d", a, b, c);
}

int main() {
    algoritmo(10, 4, 2);
}