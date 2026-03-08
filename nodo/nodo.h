#ifndef __NODO_H_
#define __NODO_H_

typedef struct nodo nodo; 

struct nodo{
    int nodo; 
}; 

nodo *crear nodo(int valor); 
int obtenervalor(const nodo*); 
void asigarvalor(nodo*, int); 
void destruirnodo(nodo *); 

#endif

