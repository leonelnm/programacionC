#include <stdio.h>

int main(){
    int max = 3;
    int matrix[max][max];

    for(int i=0; i<max; i++){
        for(int j=0; j<max; j++){
            matrix[i][j] = 5;
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