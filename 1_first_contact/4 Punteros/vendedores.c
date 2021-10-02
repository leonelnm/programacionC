#include <stdio.h>

#define N_VENDEDORES 18
#define N_PRODUCTOS 10


int mostrarMenu(){
    int in = 0;
    printf("\n\n1. Ingresar datos\n");
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
    if(vend > 9)
    {
        printf("\t*** Ingrese un vendedor entre 0 y 17\n");
        printf("Ingresa el numero de vendedor: ");
        scanf("%i", &vend);
    }
    return vend;
} 
int ingresaProducto(){
    int prod = 0;
    printf("Ingresa el numero de producto: ");
    scanf("%i", &prod);
    if(prod > 9)
    {
        printf("\t*** Ingrese un producto entre 0 y 9\n");
        printf("Ingresa el numero de producto: ");
        scanf("%i", &prod);
    }

    
    return prod;
}
float ingresaVenta(){
    float ingreso = 0.0f;
    printf("Ingresa el valor de la venta: ");
    scanf("%f", &ingreso);
    return ingreso;
}

float totalVentas(double ventas[][N_PRODUCTOS], int vendedor){
    float valor = 0.0f;
    for(int i = 0; i < N_PRODUCTOS; i++){
        valor += ventas[vendedor][i];
    }
    return  valor;
}

double mostrarIngresos(double ventas[][N_PRODUCTOS]){
    double valorT = 0;

    for(int i = 1; i < N_VENDEDORES; i++){
        printf("%i)\t", i);
       for(int j = 0; j < N_PRODUCTOS; j++){
            printf("%5.2f  ",ventas[i][j]);
            valorT += ventas[i][j];
       }
       printf("\n");
    }
    return valorT;
}

int main(){

    double ventas[N_VENDEDORES][N_PRODUCTOS] ={0};
    int menu, vendedor, producto;
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
            printf("\n\tEl total de ventas del vendedor %i es: %.2f€\n",vendedor,totalVentas(ventas,vendedor));
            break;
        case 3:
            printf("Los ingresos totales son: %.2lf € \n", mostrarIngresos(ventas));
            break;
        case 4:
            return 0;
        default:
            printf("\n\t Ingrese una opción válida!\n");
            break;
        }
    }
    
    return 0;
}