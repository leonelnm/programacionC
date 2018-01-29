#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int max = 3;
    int matrix[max][max];

    srand(time(NULL));
    for(int i=0; i<max; i++){
        for(int j=0; j<max; j++){
            matrix[i][j] = rand()%10;
        }
    }
    printf("Imprime matriz: \n");
    for(int i=0; i<max; i++){
        for(int j=0; j<max; j++){
            printf("d[%i][%i]=%i  ",i,j,matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}