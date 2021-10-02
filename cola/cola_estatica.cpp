// Cola estatica

#include <stdio.h>
#include <stdlib.h>
#include "cola_estatica.h"

// Funcion para aumentar, como si fuera un i++ pero calcula el resto (mod) para el incremento
// Si se quiere introducir en la posición 15 => suma_uno(15) = (15+1) % 10 = 6
// Si se quiere introducir en la posición 7 => suma_uno(7) = (7+1) % 10 = 8
int suma_uno(int i){
    return ((i+1)%MAX_ELEMENTS);  
}


// La cola está vacía cuando cabeza y cola apuntan al mismo sitio
int es_vacia(tipo_cola c){
    return (c.cabeza==c.cola);

}

// Ponemos la cabeza y la cola a 0 para vaciar la cola
void vaciar(tipo_cola *c){
	c->cabeza = c->cola = 0;
}


void push(tipo_cola *c, int i){

    if (suma_uno(c->cola)==c->cabeza)  // Si la cola alcanza la cabeza es porque esté llena                                       
        printf("Error: Cola llena\n");  
    else {                             
        c->valores[c->cola]= i;        // Metemos i en la cola
        c->cola = suma_uno(c->cola);   // Incrementamos la cola
    }

}

int pop(tipo_cola *c){

    int v; // valor a devolver
    //Primero comprobamos que haya elementos:
    if (es_vacia(*c)){ // Hay que pasar la estructura, no el puntero!!!
        v=-1;
        printf("Error, cola vacía\n");
    }else {
        v=c->valores[c->cabeza]; //Metemos en "v" lo que sacamos por la cabeza
        c->cabeza= suma_uno(c->cabeza); //Llamamos a la funcion suma_uno para avanzar dentro del array
    }
    return v;
}


void imprimir_cola(tipo_cola c){
	
	//Imprime mientras sea diferente y va sumando uno a la cola
	while (c.cabeza != c.cola){	
		printf("%d ",c.valores[c.cabeza]);
		c.cabeza = suma_uno(c.cabeza);
	}
}

// Devuelve el primer elemento de la cola sin eliminarlo (solo consulta)
int elemento(tipo_cola c){
	
	//Si no esta vacia se da el valor
	if(!es_vacia(c))
	{
	 return c.valores[c.cabeza];
	}
	else{
	     //si esta vacia entonces se da error
      	printf("La cola esta vacia");
       	return -1;
	}
}


