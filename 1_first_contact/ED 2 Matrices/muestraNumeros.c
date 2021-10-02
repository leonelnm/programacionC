#include <stdio.h>

#define SIZE 10

void initMatrix(int m[][SIZE]);
void showMatrix(int m[][SIZE]);

int main(){

    int m[SIZE][SIZE];

    initMatrix(m);
    showMatrix(m);


    return -1;
}

void initMatrix(int m[][SIZE]){

    int cont = 1;
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            m[i][j] = cont++;
        }
        
    }
    

}

void showMatrix(int m[][SIZE]){
    for(int i=0; i<SIZE; i++){
        for(int j=0; j<SIZE; j++){
            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }
}
