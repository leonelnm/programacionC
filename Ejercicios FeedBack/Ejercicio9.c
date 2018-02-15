#include <stdio.h>

#define N 10

int numeroMax(int *v){
    int max = 0;

    for(int i = 0; i < N; i++){
        if(v[i]>max)
            max = v[i];
    }

    return max;
}

void barrasAsteriscos (int *v, int max){
    for(int i = 0; i < max; i++){
        for(int j=0; j<N; j++){
            if(v[j] >= i)
                printf(" *");
            else
                printf("  ");
        }
        printf("\n");
    }
    return;
}

void ordenarVector(int *v){
    int temp;
    for(int i = 0; i < N-1; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            if (v[j]>v[i]){
                temp = v[j];
                v[j] = v[i];
                v[i] = temp;
            }
        }
    }
    return;
}
int main(){

    int v[N] = {21,4,6,20,5,12,14,16,18,20};
    int max = numeroMax(v);
    barrasAsteriscos(v, max);
    
    ordenarVector(v);
    printf("Vector ordenado\n");
    barrasAsteriscos(v, max);
    
    //Salida
    printf("\nPulsa INTRO para finalizar...");
    fflush(stdin);
    char tecla = getchar();
    return 0;
}