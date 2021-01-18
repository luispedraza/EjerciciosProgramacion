#include <stdio.h>

void recur(char **);

int main() {
    char *nom[10] = {"hoy", "es", "lunes", NULL};
    recur(nom);
    return 0;
}

void recur(char **pun) {
    if (*pun == NULL) return;
    recur(pun + 1); // Llamada recursiva
    printf("%s",*pun);
}