#include <stdio.h>
#include <stdlib.h>
#include "arbol_binario.h"

/** Crea un arbol vacio*/
P_NODO_ARBOL crearArbol()
{
	return NULL;
}
/** Devuelve 1 si el arbol esta vacio*/
int esVacio(P_NODO_ARBOL a)
{
	return (a==NULL);
}

P_NODO_ARBOL alojar_nodo_arbol()
{
    return((P_NODO_ARBOL)malloc(sizeof(NODO_ARBOL))); /* Reservamos memoria */
}

int pertenece(P_NODO_ARBOL arbol, int i)
/* Devuelve verdadero si el valor "i" se encuentra en el arbol "arbol", y falso
 en caso contrario */
{
    if (arbol == NULL)    /* Si el ·rbol est· vacio */
        return (0);
    
    if (arbol->valor == i)    /* Hemos encontrado el valor */
        return (1);           /* Devuelve 1 para evaluarlo en el main */
    if (arbol->valor > i) /* En el arbol los menores est·n a la izquierda
                           y los mayores a la derecha. Por tanto, si
                           i es menor que el valor actual tendremos que
                           ir hacia la izquierda */
        return (pertenece(arbol->izq, i));
    else     /* "i" es mayor que el valor actual */
        return (pertenece(arbol->der, i));
}

P_NODO_ARBOL encontrar (P_NODO_ARBOL arbol, int i)
/* Devuelve un apuntador al nodo del arbol "arbol" cuyo contenido es "i", o
 NULL en caso de que no se encuentre este valor */
{
    if (arbol == NULL)    /* Arbol vacÌo por tanto devuelve NULL */
        return (NULL);
    
    if (arbol->valor == i)    /* Hemos encontrado el valor */
        return (arbol);
    else if (arbol->valor > i)    /* El valor actual es mayor que ir por tanto
                                   vamos hacia la izquierda */
        return(encontrar(arbol->izq, i));
    else    /* "i" es mayor que el valor actual */
        return(encontrar(arbol->der, i));
}

P_NODO_ARBOL padre_de(P_NODO_ARBOL arbol, P_NODO_ARBOL nodo)
/* Devuelve un apuntador al padre del nodo "nodo" dentro del arbol "arbol".
 Devuelve NULL si el nodo es el raiz o si no se encuentra en el arbol */
{
    if (arbol == NULL)    /* Arbol vacÌo por tanto devuelve NULL */
        return (NULL);
    
    if (arbol->izq == nodo || arbol->der == nodo) /* Encontrado */
        return (arbol);
    else if (arbol->valor > nodo->valor) /* El elemento a buscar es menor que
                                          el elemento actual del arbol por
                                          tanto vamos a la izquierda */
        return(padre_de(arbol->izq, nodo));
    else    /* El elemento a buscar es mayor que el elemento actual */
        return(padre_de(arbol->der, nodo));
}

P_NODO_ARBOL insertar(P_NODO_ARBOL arbol, int i)
/* Inserta el valor "i" en el ·rbol apuntado por "arbol" y devuelve un puntero
 a la raÌz del ·rbol resultado. Esta versiÛn no permite duplicados en el
 arbol */
{
    P_NODO_ARBOL p;    /* Para no perder la cabeza del arbol */
    
    if (arbol == NULL)
    {
        p = alojar_nodo_arbol();             /* Reservamos memoria */
        p->izq = p->der = NULL;             /* Acabamos de crearlo */
        p->valor = i;
        return (p);
    }
    
    if (arbol->valor == i)    /* El valor ya existe. No hacemos nada porque no
                               permitimos valores duplicados */
        return (arbol);
    
    if (arbol->valor > i) /* "i" es menor que el valor que analizo, por tanto,
                           inserto a la izquierda */
        arbol->izq = insertar(arbol->izq, i);
    else  /* "i" es mayor que el valor actual, entonces, inserto a la derecha */
        arbol->der = insertar(arbol->der, i);
    
    return (arbol);
}


P_NODO_ARBOL borraNodo(P_NODO_ARBOL nodo)
{	
	free(nodo);
	
    return NULL;
}

P_NODO_ARBOL eliminar(P_NODO_ARBOL a, int i){
    
    P_NODO_ARBOL q,p;
    
    if (a == NULL) return a;
    
    if (a->valor > i) a-> izq = eliminar (a->izq, i);
    else if (a->valor < i) a-> der = eliminar (a->der, i);
    else{
        if ((a->der == NULL)&&(a->izq == NULL)) //caso 1
            return borraNodo(a);
        //Caso 2
        if (a->der == NULL){
            q = a->izq;
            borraNodo (a);
            return q;
        }
        if (a->izq == NULL){
            q = a->der;
            borraNodo (a);
            return q;
        }
        //Caso 3
        for(p=a,q=a->izq; q->der != NULL; q = q->der)
            p=q;
        if (p!=a)
            p-> der = q->izq;
        else
            p->izq =q->izq;
        a->valor =q->valor;
        borraNodo(q);
    }
    return a;
}

void preOrder(P_NODO_ARBOL a)//Posterior
{
	if (!esVacio(a))
	{
		preOrder(a->izq);
		preOrder(a->der);
        
	
        printf("(%i)-->", a->valor);
    }
    
}

void postOrder(P_NODO_ARBOL a)//Previo
{
	if (!esVacio(a))
	{
	
        printf("(%i)-->", a->valor);
		postOrder(a->izq);
		postOrder(a->der);
	}
    
}

void inOrder(P_NODO_ARBOL a)//Simetrico
{
	if (!esVacio(a))
	{
  		inOrder(a->izq);
  		printf("(%i)-->", a->valor);
  		inOrder(a->der);
	}
}




