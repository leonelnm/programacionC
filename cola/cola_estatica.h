// Cola estatica

#include <stdio.h>
#include <stdlib.h>
#define MAX_ELEMENTS 10 

typedef struct cola{
        
    int cabeza, cola;
    int valores[MAX_ELEMENTS];
    
}tipo_cola;


// Funcion para aumentar, como si fuera un i++ pero calcula el resto (mod) para el incremento
// Si se quiere introducir en la posición 15 => suma_uno(15) = (15+1) % 10 = 6
// Si se quiere introducir en la posición 7 => suma_uno(7) = (7+1) % 10 = 8
int suma_uno(int i);

// La cola está vacía cuando cabeza y cola apuntan al mismo sitio
int es_vacia(tipo_cola c);


// Ponemos la cabeza y la cola a 0 para vaciar la cola
void vaciar(tipo_cola *c);

void push(tipo_cola *c, int i);

int pop(tipo_cola *c);

void imprimir_cola(tipo_cola c);

// Devuelve el primer elemento de la cola sin eliminarlo (solo consulta)
int elemento(tipo_cola c);

