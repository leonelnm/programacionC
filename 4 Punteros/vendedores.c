#include <stdio.h>

#define N_VENDEDORES 18
#define N_PRODUCTOS 10


int mostrarMenu(){
    int in = 0;
    printf("\n1. Ingresar datos\n");
    printf("2. Mostrar total del vendedor\n");
    printf("3. Mostrar ingresos totales\n");
    printf("4. Salir\n");
    printf("\nElija una opcion: ");
    scanf("%i", &in);

    return  in;
}

int ingresaVendedor(){
    int vend = 0;
    printf("Ingresa el numero de vendedor: ");
    scanf("%i", &vend);
    return vend;
} 
int ingresaProducto(){
    int prod = 0;
    printf("Ingresa el numero de producto: ");
    scanf("%i", &prod);
    return prod;
}
float ingresaVenta(){
    float ingreso = 0.0f;
    printf("Ingresa el valor de la venta: ");
    scanf("%f", &ingreso);
    return ingreso;
}

double totalVentas(double ventas[][N_PRODUCTOS], int vendedor){
    double valor = 0;

    return  valor;
}

int main(){

    double ventas[N_VENDEDORES][N_PRODUCTOS];
    int menu,vendedor, producto;
    float venta;


    while(menu != 4){
        menu = mostrarMenu();
        switch (menu)
        {
        case 1:
            vendedor = ingresaVendedor();
            producto = ingresaProducto();
            venta = ingresaVenta();
            ventas[vendedor][producto] = venta;
            break;
        case 2:
            vendedor = ingresaVendedor();
            printf("El total de ventas del vendedor %i es: %.2f\n",vendedor,totalVentas(ventas,vendedor));
            break;
        default:
            break;
        }
    }
    


    return 0;
}