#include <stdio.h>
#include "nodo.h"

int main()
{
    printf("Prueba del TAD Nodo\n");

    /* 1 Crear un nodo con valor 10 */
    Nodo* n = crearNodo(10);

    /* 2 Mostrar el valor del nodo usando obtenerValor */
    printf("Valor del nodo: %d\n", obtenerValor(n));

    /* 3 Cambiar el valor a 25 usando asignarValor */
    asignarValor(n, 25);

    /* 4 Mostrar nuevamente el valor */
    printf("Nuevo valor del nodo: %d\n", obtenerValor(n));

    /* 5 Liberar el nodo con destruirNodo */
    destruirNodo(n);

    return 0;
}
