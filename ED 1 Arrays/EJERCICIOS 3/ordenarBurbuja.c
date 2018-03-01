#include <stdio.h>
#include <stdlib.h>

#define M 10

void burbuja(int *in){
    int temp = 0;
    //ordena de forma ascendente
    for(int i = 0; i < M-1; i++){
        for(int j = i+1; j < M; j++){
            if(in[i] > in[j]){
                temp = in[i];
                in[i] = in[j];
                in[j] = temp; 
            }
        }
    }    
    return;
}

int main(){
    int in[M];

    for(int i = 0; i < M; i++){
        printf("Inserta numero: ");
         scanf("%i", (in+i));
    }
    
    burbuja(in);

    for(int i = 0; i < M; i++)
    {
        printf("%i ", in[i]);
    }
    
    return 0;
}