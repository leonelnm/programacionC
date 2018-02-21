#include <stdio.h>

#define N 10

int main()
{
    int v1[N] = {0,1,2,3,4,5,6,7,8,9};
    int v2[N] = {0};

    for (int i=0; i<N ;i++){
        printf("%i ", v1[i]);
    }

    int p=0;
    //Cambiar el orden del V1 en v2
    for(int i=(N-1); i>=0; i--){
        v2[p] = v1[i];
        p++;
    }
    printf("\n");
    for (int i=0; i<N ;i++){
        printf("%i ", v2[i]);
    }


    //Salida
    printf("\nPulsa INTRO para finalizar...");
    fflush(stdin);
    char tecla = getchar();
    return 0;
}
