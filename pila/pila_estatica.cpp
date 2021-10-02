// Pila estatica

#include <stdio.h>
#include <stdlib.h>
#include "pila_estatica.h"

// Funci�n vaciar, pone a 0 la cima 
void vaciar(tipo_pila *p)
{
	p->cima = 0;	
	return ;
}

// Devuelve 1 si es vac�a, 0 en caso contrario
int esVacia(tipo_pila p)
{
	return (p.cima==0);		
}


// Funci�n push, devuelve el c�digo de error en el tercer par�metro
void push (tipo_pila *p, int i, int *error){
    
    *error = 0;
    if (p->cima<MAX_ELEMENTS)
        p->valores[p->cima++]=i; // inserta y aumenta
    else {
        *error = -1;
    }
    
}

//Funcion desapilar (pop), devuelve el c�digo de error en el segundo par�metro
int pop(tipo_pila *p, int *error){
    
    *error = 0;
    if (p->cima>0) { // si la cima es mayor que cero
        return (p->valores[--p->cima]); //devuelve el valor que hay antes de la cima y le resta uno a cima
    }else {
        *error= -1;
        return (-1);
    }
}


void imprimir_pila(tipo_pila p)
{	
	for (int i = p.cima-1; i >= 0 ; i--) {
		printf("%d\n", p.valores[i]);
	}
}

