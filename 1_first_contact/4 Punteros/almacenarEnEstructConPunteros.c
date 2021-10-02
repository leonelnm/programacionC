#include <stdio.h>
#include <stdlib.h>

int main(){

    struct tipoFecha{
        int dia;
        int mes;
        int anio;
    } *punt;

    punt = (struct tipoFecha*) malloc(sizeof(struct tipoFecha));

    printf("Día: ");
    scanf("%i", &punt->dia);
    printf("Mes: ");
    scanf("%i", &punt->mes);
    printf("Anio: ");
    scanf("%i", &(*punt).anio);

    printf("Dia %i Mes %i Anio %i\n",(*punt).dia,(*punt).mes,punt->anio);
    
    free(punt);
    return 0;
}