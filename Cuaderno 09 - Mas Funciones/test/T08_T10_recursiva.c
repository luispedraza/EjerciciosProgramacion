#include <stdio.h>

int recursiva(int a, int b);

int main(void) {
    int x = 20, y = 10, result = 0;
    result = recursiva(x, y);
    printf("%d\n", result);
    return 0;
}

int recursiva(int a, int b) {
    if (b == 1) return a;
    else return a + recursiva(a, b - 1);
}
