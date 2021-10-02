#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 50
int main(){

    int v[N];
    int *p_v[N];

    srand(time(NULL));
    for(int i = 0; i < N; i++){
        v[i] = rand()%100;
        *(p_v+i) = &v[i];
        printf("%d ", *(v+i));
    }

    printf("\n\n");
    for(int i = 0; i < N; i++)
    {
        printf("%i ", *(p_v[i]));
    }
    
    


    return 0;
}