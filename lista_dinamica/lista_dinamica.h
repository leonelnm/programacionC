
typedef struct t_persona{
    int DNI;
    char nombre[50];
}Persona;


typedef struct t_lista{
    Persona persona;
    struct t_lista *siguiente;  // puntero a siguiente
    struct t_lista *anterior;   // puntero a anterior
}NODO_LISTA, *P_NODO_LISTA;


int es_vacia (P_NODO_LISTA lista);

P_NODO_LISTA insertar(P_NODO_LISTA lst, Persona persona, int pos);
    
P_NODO_LISTA borrar(P_NODO_LISTA lst, int pos, Persona *persona);

P_NODO_LISTA buscar(P_NODO_LISTA lst, int dni);
    
void imprimir_lista (P_NODO_LISTA lst);


   
