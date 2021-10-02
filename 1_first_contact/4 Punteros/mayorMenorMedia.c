#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

void mayorMediaMedia (float *v, int size,float *mayor, float *menor, float *media){
    //inicializa valores con el primer numero del vector
    *mayor = *menor = *v;
    *media = 0.0f;

    for(int i = 0; i < size; i++){
        if(*mayor < *(v+i))  //mayor
            *mayor = *(v+i);
        if(*menor > *(v+i))  //menor
            *menor = *(v+i);
        *media += *(v+i);
    }
    
   printf("La suma de todos los elementos es: %.2f\n", *media);
    *media = *media/size;
    


    return;
}
int main(){

    float *v;
    int memSize = N* sizeof(float);
    float mayor, menor, media;
    
    v = (float *) malloc (memSize);

    srand(time(NULL));
    for(int i = 0; i < N; i++)
    {
        *(v+i) = rand()%11;
    }

    mayorMediaMedia(v, N, &mayor, &menor, &media);

    for(int i = 0; i < N; i++)
    {
       printf("%.2f ", *(v+i));
    }
    
 

    printf("\nEl mayor es: %.2f\n", mayor);
    printf("El menor es: %.2f\n", menor);
    printf("La media es: %.2f\n", media);

    free(v);
    return 0;
}