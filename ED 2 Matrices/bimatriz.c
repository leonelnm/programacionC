#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 2
#define VMAX 4

void initMatrix(int matrix[][TAM], const int valorMaximo);
void showMatrix(int matrix[][TAM]);
void multMatrix(int matrix1[][TAM], int matrix2[][TAM], int res[][TAM]);

int main()
{
    srand(time(NULL));

    int m1[TAM][TAM];
    int m2[TAM][TAM];
    int mResultado[TAM][TAM];
    
    initMatrix(m1, VMAX);
    initMatrix(m2, VMAX);

    showMatrix(m1);
    printf("\n");
    showMatrix(m2);
    printf("\n");

    multMatrix(m1, m2, mResultado);

    showMatrix(mResultado);



    return 0;
}

void initMatrix(int matrix[][TAM], const int valorMaximo){

    for (int i = 0; i < TAM; i++){
        for (int j = 0; j < TAM; j++){
            matrix[i][j] = rand() % VMAX;
        }
    }
}

void showMatrix(int matrix[][TAM]){
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }
}
void multMatrix(int matrix1[][TAM], int matrix2[][TAM], int res[][TAM]){
    for(int i = 0; i < TAM; i++){

        for(int j = 0; j < TAM; j++){
            res[i][j] = 0;

            for(int k = 0; k < TAM; k++){
                res[i][j] += matrix1[i][k] * matrix2[k][j];
            } 
        }
    }
}
