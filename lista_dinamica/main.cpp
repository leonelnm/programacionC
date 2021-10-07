#include <stdio.h>
#include <stdlib.h>
#include "lista_dinamica.h"
#include "string.h"

int main(){
    int valor;
    P_NODO_LISTA l = NULL;
    
    Persona p1, p2;
    p1.DNI = 111;
    strcpy(p1.nombre, "Erik");

    p2.DNI = 222;
    strcpy(p2.nombre, "Leonel");

    l = insertar(l, p1, 1);    
    l = insertar(l, p2, 2);
    
    imprimir_lista(l);
    l = borrar(l, 1, &p1);
    printf("Persona eliminada: %d\n", p1.DNI);

    imprimir_lista(l);
   
    return 0;
     
}


