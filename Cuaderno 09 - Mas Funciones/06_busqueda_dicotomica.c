/**
* Programa que realiza una búsqueda dicotómica
* en un array de enteros empleado recursividad
*/

#include <stdio.h>

int buscar(int valor, int ini, int fin, int vector[]);

int main() {
    int vector[] = {1, 4, 7, 9, 14, 56, 145, 156, 200, 256,
                    324, 336};
    int valor_buscado = 4;
    int posicion = buscar(valor_buscado, 0, 11, vector);
    if (posicion == -1) {
        printf("No se ha encontrado el valor.");
    } else {
        printf("Valor %d encontrado en posicion: %d", valor_buscado, posicion);
    }
    return 0;
}

int buscar(int valor, int ini, int fin, int vector[]) {
    int mitad;
    if (ini == fin) {
        // Caso trivial: vector de 1 elemento
        return (vector[ini] == valor) ? ini : -1;
    }
    // Si llegamos aquí, el vector tiene al menos dos elementos
    mitad = (ini + fin) / 2; // división entera para encontrar punto medio
    if (vector[mitad] == valor) {
        return mitad; // valor encontrado
    } else if (vector[mitad] < valor) {
        // Buscamos a la derecha del punto medio actual
        return buscar(valor, mitad + 1, fin, vector);
    } else {
        // Buscaos a la izquierda del punto medio actual
        return buscar(valor, ini, mitad - 1, vector);
    };
}
