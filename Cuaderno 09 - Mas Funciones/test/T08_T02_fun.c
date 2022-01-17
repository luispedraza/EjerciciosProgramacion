
#include <stdio.h>

void fun(int x) {
    if (x == 1) return;
    printf("%d", x--);
    fun(x);
    printf("%d", x);
}

int main() {
    fun(3);
}
