#include <stdio.h>
#include "pelicula.h"

int main()
{

    printf("Prueba del TAD Pelicula\n");

    /* Crear una película */
    Pelicula* p = crearPelicula("Inception", 2010, "Ciencia Ficcion");


    /* Agregar directores */
    agregarDirector(p, "Christopher Nolan");


    /* Imprimir película */
    imprimir(p);


    printf("\nCambiar genero\n");

    /* Cambiar genero */
    cambiarGenero(p, "Thriller");


    /* Imprimir nuevamente */
    imprimir(p);


    /* Liberar memoria */
    destruir(p);

    return 0;
}
