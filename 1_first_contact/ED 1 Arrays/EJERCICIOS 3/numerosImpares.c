#include <stdio.h>

#define M 100

int main(){

    int impares[M];
    int index = 0;
    for(int i = 1; i < M; i++)
    {
        if(i%2 == 1) {
            impares[index] = i;
            index++;
        }
    }
    
    for(int i = 0; i < M; i++){
        if(impares[i] == '\0') break;
        printf("%i ", impares[i]);        
    }    

    return 0;
}