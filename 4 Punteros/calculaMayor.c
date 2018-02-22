#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20

int calculaMayor(int *numeros, int size, int *pos){
    int mayor = 0;

    for(int i = 0; i < size; i++)
    {
        if (mayor < *(numeros+i)){
            mayor = *(numeros+i);
            *pos = i;
        }
    }
    

    return mayor;
}

int main(){

    int v[TAM];
    int mayor, posicion;

    srand(time(NULL));

    for(int i = 0; i < TAM; i++)
    {
        v[i] = (int) rand()%100;
    }

    mayor = calculaMayor(v,TAM, &posicion);

    printf("El mayor numero del vector es: %i\nUbicado en la posicion %i\n", mayor, posicion);

    for(int i = 0; i < TAM; i++)
    {
        printf("%i)\t%i\n",i,*(v+i) );
    }
    
    return 0;
}