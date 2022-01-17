#include <stdio.h>

void fun(void);

int main() {
    fun();
    return 0;
}

void fun(void) {
    int n;
    scanf("%d", &n);
    if (n == 0) return;
    fun();
    printf("%d ", n);
}
