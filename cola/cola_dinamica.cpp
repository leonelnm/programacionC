// Cola dinamica
#include <stdio.h>
#include <stdlib.h>
#include "cola_dinamica.h"


void crear(tipo_cola *q) {
     q->cabeza = NULL;
     q->cola = NULL;
}

int es_vacia(tipo_cola *q){

    return (q->cabeza==NULL); // Si la cabeza está a Null, cola vacía
}

void push(tipo_cola *q, int i){

    P_nodo_cola paux;
    paux = (P_nodo_cola)malloc(sizeof(nodo_cola)); //Reservamos memoria
    
    paux->valor = i;
    paux->sgte = NULL; //el último nodo nunca apunta a nadie
    
    if (es_vacia(q)){ // Si es vacia, la cabeza y cola apuntan al único nodo creado

        q->cabeza=q->cola= paux; 
        
    }else {
        q->cola->sgte = paux; //con el ultimo apuntamos al siguiente nodo creado que es paux (el que era el ultimo lo apuntamos al nuevo)
        q->cola = paux; //el nodo creado lo introducimos en la última posicion y ahora es la cola
    
    }
}

int pop(tipo_cola *q){

    P_nodo_cola p;
    int v;
    
    if (es_vacia(q)) {
        v=-1;
        printf("Error, cola vacía\n");
    }else {
        v= q->cabeza->valor; //metemos el valor de la cabeza en v
        p= q->cabeza; // metemos la posicion de la cabeza en p
        q->cabeza=q->cabeza->sgte; //Apuntamos al siguiente nodo
        
        free(p);  //Liberamos la posicion de p
    }
    return (v);
    

}


void vaciar(tipo_cola *q){

    P_nodo_cola p, t;
    
    p=q->cabeza;
    while (p!=NULL) {
        t=p;        
        p=p->sgte;  //avanzamos p        
        free(t);
    }
    q->cabeza = q->cola = NULL;

}


void imprimir_cola(tipo_cola cola){
	//Un puntero a nodo axuilizar
	P_nodo_cola paux;
	
	//Mientras nodoAuxiliar = cabeza, y no sea NULL, se iguala al siguiente
	for (paux = cola.cabeza;paux!=NULL;paux=paux->sgte){
		printf("%d ",paux->valor);
	}
	printf("\n");
}


int elemento(tipo_cola *q){

    int v;
    //Si esta vacia se muestra un error
    if(es_vacia(q)){
        v = -1;
        printf("Error: cola vacia\n");
    }
    else{
         //Asiganmos el valor del nodo actual
         v = q->cabeza->valor;
    }
    return v;
}



