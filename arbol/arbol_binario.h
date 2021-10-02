

typedef struct nodo_arbol
{
    int valor;                       /* Campo donde almacenaremos el valor */
    struct nodo_arbol *izq;    /* Puntero al hijo izquierdo */
    struct nodo_arbol *der;      /* Puntero al hijo derecho */
}NODO_ARBOL, *P_NODO_ARBOL;


P_NODO_ARBOL crearArbol();
int esVacio(P_NODO_ARBOL a);
int pertenece(P_NODO_ARBOL arbol, int i);
P_NODO_ARBOL encontrar (P_NODO_ARBOL arbol, int i);
P_NODO_ARBOL padre_de(P_NODO_ARBOL arbol, P_NODO_ARBOL nodo);
P_NODO_ARBOL insertar(P_NODO_ARBOL arbol, int i);
P_NODO_ARBOL eliminar(P_NODO_ARBOL a, int i);

void preOrder(P_NODO_ARBOL a);
void postOrder(P_NODO_ARBOL a);
void inOrder(P_NODO_ARBOL a);

