#include <stdio.h>

#define N 10

void barrasAsteriscos (int *v){

    for(int i = 0; i < N; i++)
    {
        int p = v[i];
        for(int j = 0; j < p ; j++)
        {
            printf("*\n");
        }
    }
    return;
}


int main(){

    int v[N] = {2,4,6,8,5,12,14,16,18,20};

    barrasAsteriscos(v);
    

    /*//Salida
    printf("\nPulsa INTRO para finalizar...");
    fflush(stdin);
    char tecla = getchar();*/
    return 0;
}