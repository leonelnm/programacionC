// Pila estatica

#include <stdio.h>
#include <stdlib.h>
#define MAX_ELEMENTS 10 

typedef struct pila {
    
    int valores[MAX_ELEMENTS];
    int cima;
    
}tipo_pila;


void vaciar(tipo_pila *p);

int esVacia(tipo_pila p);

void push (tipo_pila *p, int i, int *error);

int pop(tipo_pila *p, int *error);

void imprimir_pila(tipo_pila p);

