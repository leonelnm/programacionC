#include <stdio.h>

#define N 5

void multiplicar(int *v, int *v2){

    for(int i = 0; i < N; i++)
        v2[i] = v[i]*2;
    return;
}

void seleccionDirecta(int *v, int *out){
    int min, temp;
    for(int i = 0; i < N; i++){
        min = i;
        for(int j = i+1; j < N; j++){
            if(v[j] < v[min])
                min = j;
        }
        if(min != i){
            temp = v[i];
            v[i] = v[min];
            v[min] = temp;
        }
        out[i] = v[i];
    }
    
    return;
}
int main(){

    int in[5],two[5],out[5];

    for(int i = 0; i < N; i++){
        printf("Inserta numero: ");
        scanf("%i", (in+i));
    }

    multiplicar(in, two);
    seleccionDirecta(two, out);
    
    for(int i = 0; i < N; i++)
        printf("%i ", out[i]);

    return 0;
}