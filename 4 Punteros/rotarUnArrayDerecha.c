#include <stdio.h>


void rotarVector(int *v, int size, int k){
    int aux[size];
    int pos;

    //Copiar todo el vector en una variable
    for(int i = 0; i < size; i++)
        aux[i] = *(v+i);
    
    pos = k;

    for(int i = 0; i < size; i++){
        if(pos >= size)  
            pos = 0;
        v[pos] = aux[i];  //Escribe hasta el final del vector y empieza otra vez
        pos++;
    }
    
}

int main(){

    int a[] = {1,2,3,4,5,6,7,8,9,10};

    rotarVector(a,(sizeof(a)/sizeof(*a)),5);
    
    for(int i = 0; i < 10; i++)
    {
        printf("%i ", a[i]);
    }

    printf("\n%li\n", sizeof(float));
    
    return 0;
}