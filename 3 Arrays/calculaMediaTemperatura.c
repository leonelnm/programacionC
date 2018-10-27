#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define d 7

int main(){

    float dias[d],media;

    srand(time(NULL));  //Para iniciar los valores aleatorios
    for(int i=0; i<=d; i++){
        dias[i] = rand()%50; //pertenece a la libreria stdlib.h
    }
    
    for(int i=0; i<=d; i++){
        media += dias[i];

    }
    printf("La temperatura media de la semana ha sido: %.3fºC\n",(media/d));

    return 0;
}