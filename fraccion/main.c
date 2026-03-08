#include <stdio.h>
#include "fraccion.h"

int main()
{

    printf("Prueba del TAD Fraccion\n");

    /* 1 Crear dos fracciones */
    Fraccion* f1 = crearFraccion(1,2);
    Fraccion* f2 = crearFraccion(3,4);


    printf("Fraccion 1: ");
    imprimir(f1);


    printf("Fraccion 2: ");
    imprimir(f2);


    printf("\nSuma de fracciones:\n");

    /* 2 Sumar fracciones */
    Fraccion* resultado = sumar(f1, f2);


    /* 3 Imprimir resultado */
    imprimir(resultado);


    /* 4 Liberar memoria */
    destruir(f1);
    destruir(f2);
    destruir(resultado);

    return 0;
}
