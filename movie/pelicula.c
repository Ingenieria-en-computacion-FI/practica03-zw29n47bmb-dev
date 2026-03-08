#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pelicula.h"

/* Definición de la estructura */
struct Pelicula
{
    char* titulo;
    int anio;
    char* genero;
    char* directores[MAX_DIRECTORES];
    int numDirectores;
};


/* Función para copiar cadenas dinámicamente */
char* copiarCadena(const char* texto)
{
    char* copia = (char*) malloc(strlen(texto) + 1);

    if(copia != NULL)
        strcpy(copia, texto);

    return copia;
}


/* Crear película */
Pelicula* crearPelicula(const char* titulo, int anio, const char* genero)
{
    Pelicula* p = (Pelicula*) malloc(sizeof(Pelicula));

    if(p != NULL)
    {
        p->titulo = copiarCadena(titulo);
        p->genero = copiarCadena(genero);
        p->anio = anio;
        p->numDirectores = 0;
    }

    return p;
}


/* Imprimir película */
void imprimir(Pelicula* p)
{
    if(p == NULL) return;

    printf("Titulo: %s\n", p->titulo);
    printf("Anio: %d\n", p->anio);
    printf("Genero: %s\n", p->genero);

    printf("Directores:\n");

    for(int i = 0; i < p->numDirectores; i++)
    {
        printf("- %s\n", p->directores[i]);
    }
}


/* Cambiar género */
void cambiarGenero(Pelicula* p, const char* nuevoGenero)
{
    if(p == NULL) return;

    free(p->genero);
    p->genero = copiarCadena(nuevoGenero);
}


/* Agregar director */
void agregarDirector(Pelicula* p, const char* director)
{
    if(p == NULL) return;

    if(p->numDirectores < MAX_DIRECTORES)
    {
        p->directores[p->numDirectores] = copiarCadena(director);
        p->numDirectores++;
    }
    else
    {
        printf("No se pueden agregar mas directores\n");
    }
}


/* Liberar memoria */
void destruir(Pelicula* p)
{
    if(p == NULL) return;

    free(p->titulo);
    free(p->genero);

    for(int i = 0; i < p->numDirectores; i++)
    {
        free(p->directores[i]);
    }

    free(p);
}
