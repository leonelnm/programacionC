#include <stdio.h>
#include <stdlib.h>
#include "lista_dinamica.h"

int es_vacia (P_NODO_LISTA lista){
	if(lista==NULL)
        return 1;
    else
        return 0;
}

P_NODO_LISTA insertar(P_NODO_LISTA lst, Persona persona, int pos){ // devuelve P_NODO_LISTA
    
    P_NODO_LISTA laux, lsgte; 
    int i;
    
    if(pos < 1 ) {
           printf("ERROR, fuera de posicion\n");
           return lst; 
     }
    //Insertamos al principio
    if ( pos == 1 || es_vacia(lst)){  
        laux = (P_NODO_LISTA)malloc(sizeof(NODO_LISTA));
        laux->persona = persona;        
        laux->anterior = NULL;  // Soy el primero, pongo el anterior a NULL
        laux->siguiente = lst;  // Y el siguiente lo apunto a lst        
        if(!es_vacia(lst))
            lst->anterior = laux; // Si no es vacia apuntamos lst->anterior al primero
        
        return(laux);			 
    } 
    
    // resto de posiciones
    for (i=1, laux=lst;(i<pos-1)&&(laux!=NULL);i++) 
        laux = laux->siguiente;
    

    if( laux != NULL) {
        lsgte = laux->siguiente;
        laux->siguiente = (P_NODO_LISTA)malloc(sizeof(NODO_LISTA));
        laux->siguiente->persona = persona;
        laux->siguiente->siguiente = lsgte; // Apuntamos al siguiente
        laux->siguiente->anterior = laux;   // Apuntamos hacia atras
        
		if(lsgte != NULL) //no es el ultimo cuando inserto
            lsgte->anterior = laux->siguiente;	
    } //fin del if
    else  printf("ERROR, fuera de posicion\n");

    return(lst);
}


P_NODO_LISTA borrar(P_NODO_LISTA lst, int pos, Persona *persona){
    
    P_NODO_LISTA laux;
    int i;
    
    //Si la posicion esta fuera de rango o la lista es vacia nose hace nada. Devolvemos la lista tal cual.
    if ((pos < 1) || (es_vacia(lst))){
        printf("ERROR, Lista vacia o posicion no valida\n");
        persona = NULL;
        return lst;
        
    }
    
    // Primera posicion
    if (pos == 1){
        laux = lst->siguiente;
        *persona = lst->persona;
        free(lst);
        if(laux != NULL)
            laux->anterior = NULL;
        return (laux);
    } 
    
    // Resto de posiciones
    for (i=1, laux=lst; (i<pos)&&(laux->siguiente != NULL); i++)
        laux = laux->siguiente;
    
    //Si no hemos llegado al �ltimo nodo, eliminamos y
	//actualizamos las referencias del nodo anterior y posterior del eliminado
    if(laux->siguiente != NULL) {
		laux->anterior->siguiente = laux->siguiente;
		laux->siguiente->anterior = laux->anterior;
		*persona = laux->persona;
		free(laux);
    }
    else if (pos==i){ //es el ultimo de la lista
        laux->anterior->siguiente=laux->siguiente; //null
        *persona = laux->persona;
        free(laux);
    }
    else {
       	persona = NULL;
   		printf("ERROR, fuera de posicion\n");
	}
    
    return(lst);
    
}

P_NODO_LISTA buscar(P_NODO_LISTA lst, int dni){
    
    P_NODO_LISTA laux;
    for(laux=lst; laux!=NULL;laux=laux->siguiente)
        if(laux->persona.DNI == dni) break;
        
    return(laux);    
}

void imprimir_lista (P_NODO_LISTA lst){
    P_NODO_LISTA p;
    p=lst;
    printf("Valores dentro de lista:\n");

    while(p != NULL){
        printf("\tDNI: %d - Name: %s \n", p->persona.DNI, p->persona.nombre);
        p=p->siguiente;			 
    }
    printf("\n");
}



