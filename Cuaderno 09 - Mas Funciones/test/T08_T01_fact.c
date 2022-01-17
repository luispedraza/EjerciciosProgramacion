#include <stdio.h>

int fact(int x) {
    if (x == 0) return (1);
    x = x * fact(x - 1);
    printf(" %d", x);
    return (x);
}

int main() {
    fact(1);
    return 0;
}

