#include <stdio.h>

#define FILAS 20
#define COLUMNAS 9
#define LIBRE 0
#define OCUPADO 1

int mostrarMenu(){
    int in = 0;
    printf("\n\n1. Reservar Asiento\n");
    printf("2. Cancelar Asiento\n");
    printf("3. Mostrar Asientos\n");
    printf("4. Salir\n");
    printf("\nElija una opcion: ");
    scanf("%i", &in);

    return  in;
}

void mostrarAsientos(int asientos[][COLUMNAS]){

    for (int i = 0; i < FILAS; i++){
        for(int j = 0; j<COLUMNAS; j++){
            if(j==3 || j==6) printf("\t");
            printf("%i ", asientos[i][j]);
        }
        printf("\n");
    }
    return;
}

int reservarAsiento(int asientos[][COLUMNAS]){
    int fila,numero;
    printf("Ingresa fila del asiento: ");
    scanf("%i", &fila);
    printf("Ingrese el numero de asiento: ");
    scanf("%i", &numero);
    if (asientos[fila][numero] == LIBRE){
        asientos[fila][numero] = OCUPADO;
        return OCUPADO;
    }else{
        printf("\tEl asiento esta ocupado, intente con otro asiento!\n");
        return LIBRE;
    }
}

int cancelarAsiento(int asientos[][COLUMNAS]){
    int fila,numero;
    printf("Ingresa fila del asiento: ");
    scanf("%i", &fila);
    printf("Ingrese el numero de asiento: ");
    scanf("%i", &numero);
    if (asientos[fila][numero] == OCUPADO){
        asientos[fila][numero] = LIBRE;
        return LIBRE;
    }else{
        printf("\tEl asiento no ha sido ocupado, intente con otro asiento!\n");
        return OCUPADO;
    }
}

int main(){

    int asientos[FILAS][COLUMNAS] = {0};
    int in,menu = 0;
    while (menu != 4){
        menu = mostrarMenu();
        switch (menu)
        {
            case 1:
                in = reservarAsiento(asientos);
                while (in != OCUPADO){
                    in = reservarAsiento(asientos);
                }
                printf("\tReserva Realizada con Exito!!!\n");
            break;
            case 2:
                in = cancelarAsiento(asientos);
                while (in != LIBRE){
                    in = cancelarAsiento(asientos);
                }
                printf("\tAnulacion Realizada con Exito!!!\n");
            break;
            case 3:
                mostrarAsientos(asientos);
            break;
            case 4:
                return 0;
            break;

        default:
            printf("\n\t Ingrese una opcion valida!\n");
            break;
        }
    }

    return 0;
}