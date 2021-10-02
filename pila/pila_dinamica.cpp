// Pila dinámica
#include <stdio.h>
#include <stdlib.h>
#include "pila_dinamica.h"

pto_pila crear(pto_pila p)
{	
	p = NULL;
	return p;
}



pto_pila push(pto_pila p,int i){

    pto_pila paux; 
    paux = (pto_pila)malloc(sizeof(nodo_pila)); // Creamos un nodo de pila

   //paux es el nuevo tope y p es el antiguo tope
    paux->valor=i; 
    paux->sgte=p;  
    
    return (paux); // devolvemos el nuevo tope de la pila
    
}


pto_pila pop(pto_pila p, int * valor){
    
    pto_pila paux;
    
    if (p == NULL) return NULL; // Pila vacia
    
    *valor = p->valor;
    paux = p->sgte;  // Paux es el nuevo tope de la pila
    free(p);
    return paux;
}


// Devuelve el tope de la pila sin eliminarlo (solo consulta)
int tope(pto_pila p){
    int i;
    if(p!=NULL){
        i=p->valor;
        return i;
    }else{
          return -1;
    }
}

pto_pila vaciar(pto_pila p){
     pto_pila paux, taux;
     paux=p;
     while(paux!=NULL){
                       taux=paux;
                       paux=paux->sgte;
                       free(taux);
     }
     return NULL;
}


int es_vacia(pto_pila p){
     if(p!=NULL){
                 return 0;
     }else{
                 return 1;
     }
}

void imprimir_pila(pto_pila p){
     pto_pila paux;
     printf("El contenido de la pila es:\n");
     paux=p;
     while(paux!=NULL){
                       printf("%d\n",paux->valor);
                       paux=paux->sgte;
     }
     return;
}
