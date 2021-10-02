#include <stdio.h>

#define M 100

int main(){

    int pares[M];
    int index = 0;
    for(int i = 1; i < M; i++)
    {
        if(i%2 == 0) {
            pares[index] = i;
            index++;
        }
    }
    
    for(int i = 0; i < M; i++){
        if(pares[i] == '\0') break;
        printf("%i ", pares[i]);        
    }    

    return 0;
}