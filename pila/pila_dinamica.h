// Pila dinámica
#include <stdio.h>
#include <stdlib.h>


typedef struct pila{ 
 
    int valor;  
    struct pila *sgte;   

}nodo_pila, *pto_pila;  


pto_pila crear(pto_pila p);

pto_pila push(pto_pila p,int i);

pto_pila pop(pto_pila p, int * valor);

int tope(pto_pila p);

pto_pila vaciar(pto_pila p);

int es_vacia(pto_pila p);

void imprimir_pila(pto_pila p);

