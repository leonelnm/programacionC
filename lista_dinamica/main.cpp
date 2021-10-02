#include <stdio.h>
#include <stdlib.h>
#include "lista_dinamica.h"

int main(){
    int valor;
    P_NODO_LISTA l = NULL;
    
    l = insertar(l, 5, 1);    
    l = insertar(l, 7, 2);
    l = insertar(l, 8, 3);
    l = insertar(l, 2, 4);
    l = insertar(l, 9, 5);
    l = insertar(l, 55, 1);
    l = insertar(l, 33, 4);
    imprimir_lista(l);
    l = borrar(l, 4, &valor);
    printf("Valor:%d\n", valor);          
    imprimir_lista(l);
   
    return 0;
     
}


