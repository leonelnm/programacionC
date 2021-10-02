//Encuentra los primeros 100 numeros primos, para encontrar mas hay q cambiar M

#include <stdio.h>
#include <math.h>

#define M 100
int main(){

    int k = 0;
    int init = 2;
    int cont=0;
    int primos[M];

    while(k<M)
    {
        int cont = 0;
        for(int i = 1; i <= ((int)sqrt(init)); i++)
        {
            if(init%i == 0) cont++;
        }
        if(cont == 1){
                primos[k] = init;
                k++;
        }
        init++;
    }
    
    for(int i = 0; i < M; i++){
        printf("%i ", primos[i]);
    }    

    return 0;
}