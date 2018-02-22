#include <stdio.h>

int main(){

    struct tipoFecha{
        int dia;
        int mes;
        int anio;
    } fecha, *punt;

    punt = &fecha;

    printf("Día: ");
    scanf("%i", &(*punt).dia);
    printf("Mes: ");
    scanf("%i", &fecha.mes);
    printf("Anio: ");
    scanf("%i", &(*punt).anio);

    printf("Dia %i Mes %i Anio %i\n",(*punt).dia,(*punt).mes,fecha.anio);
    

    return 0;
}