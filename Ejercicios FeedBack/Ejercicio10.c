#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100


void imprimeVector(int *v){
    for(int i = 0; i < N; i++)
    {
        printf("%i ", v[i]);
    }
    return;
}

int main(){
    int v[N], pares[N], impares[N];
    int par=0, impar=0;

    srand(time(NULL));

    for(int i = 0; i < N; i++)
    {
        v[i] = rand()%1000;
        
        if ((v[i] % 2) == 0){
            pares[par] = v[i];
            par++;
        }else{
            impares[impar] = v[i];
            impar++;
        }
    }

    //Mostrar el vector con 100 valores desordenados
    imprimeVector(v);
   
    printf("\n\n\tMuestra ordenados\n");
    //Mostrar vector con valores Pares - Impares juntos
    for(int i = par; i < N; i++)
    {
        pares[i] = impares[i-par];
    }

    imprimeVector(pares);

    return 0;
    
}
