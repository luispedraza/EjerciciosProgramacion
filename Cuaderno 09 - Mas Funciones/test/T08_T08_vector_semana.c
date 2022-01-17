#include <stdio.h>
#include <string.h>

void fun(int i);

char p[][10] = {"lunes", "martes", "miercoles", "jueves", "viernes", "sabado", "domingo"};

int main() {
    fun(0);
    return 0;
}

void fun(int i) {
    if (strcmp(p[i], "sabado") == 0) return;
    fun(i + 1);
    printf("%s ", p[i]);
}