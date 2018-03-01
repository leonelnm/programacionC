#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int buscar(int *v, int in){
    int cont = 0;

    for(int i = 0; i < N; i++){
        if(v[i] == in){
            cont++;
            printf("Encontrado en la posicion %i\n", i+1);
        }

    }
    if(cont == 0) {
        printf("No encontrado\n");
        return 0;
    } else{
        return 1;
    }
}

int main(){
    int v[N];
    int in = 0;
    int r=0;

    srand(time(NULL));
    for(int i=0; i<N; i++){
        v[i] =(int) rand()%20;
    }
    
    while(r != 1){
        printf("Inserte numero a buscar: ");
        scanf("%i", &in);
        r = buscar(v,in);
    }

    return 0;
}