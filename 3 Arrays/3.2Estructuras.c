#include <stdio.h>

    typedef struct stPuntos{
        float c_x;
        float c_y;
    }punto;

    typedef struct stTriangulos{
        punto v1;
        punto v2;
        punto v3;
    }triangulo;

    typedef struct stTitular{
        char nombre[10];
        char apellido[10];
        char direccion[20];
        char dni[10];
    } clientes;

    typedef struct stCuentaCorriente{
        clientes c1;
        clientes c2;
        int n_cuenta[20];
        double saldo;
    }cuenta;
    
int main(){  

    return 0;
}