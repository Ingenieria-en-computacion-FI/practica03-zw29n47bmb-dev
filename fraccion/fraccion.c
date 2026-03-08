#include <stdio.h>
#include <stdlib.h>
#include "fraccion.h"

/* Definición de la estructura */
struct Fraccion{
    int num;
    int den;
};

/* Función auxiliar para calcular MCD */
int mcd(int a, int b)
{
    if(b == 0)
        return a;
    return mcd(b, a % b);
}

/* Crear una fracción */
Fraccion* crearFraccion(int num, int den)
{
    if(den == 0)
    {
        printf("Error: el denominador no puede ser 0\n");
        return NULL;
    }

    Fraccion* f = (Fraccion*) malloc(sizeof(Fraccion));

    if(f != NULL)
    {
        f->num = num;
        f->den = den;
        simplificar(f);
    }

    return f;
}

/* Simplificar la fracción */
void simplificar(Fraccion* f)
{
    if(f == NULL) return;

    int divisor = mcd(f->num, f->den);

    f->num = f->num / divisor;
    f->den = f->den / divisor;
}

/* Sumar dos fracciones */
Fraccion* sumar(Fraccion* a, Fraccion* b)
{
    if(a == NULL || b == NULL) return NULL;

    int num = a->num * b->den + b->num * a->den;
    int den = a->den * b->den;

    return crearFraccion(num, den);
}

/* Imprimir fracción */
void imprimir(Fraccion* f)
{
    if(f != NULL)
        printf("%d/%d\n", f->num, f->den);
}

/* Liberar memoria */
void destruir(Fraccion* f)
{
    free(f);
}
