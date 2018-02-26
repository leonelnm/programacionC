#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

int main(){

    float mat1[TAM][TAM];
    float mat2[TAM][TAM];
    float res[TAM][TAM];
    float sum = 0.0f;

    srand(time(NULL));
//llenar matrices con valores entre 0-10
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            mat1[i][j] = rand()%10;
        }
    }

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            mat2[i][j] = rand()%10;
        }
    }

//Imprime matrices
     printf("Matriz 1\n");
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            printf("%.2f  ",mat1[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 2\n");
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            printf("%.2f  ",mat2[i][j]);
        }
        printf("\n");
    }


// Calcula matriz
    for(int i = 0; i < TAM; i++){

        for(int j = 0; j < TAM; j++){
            res[i][j] = 0;

            for(int k = 0; k < TAM; k++){
                res[i][j] += mat1[i][k] * mat2[k][j];
            } 
        }
    }

//Matriz resultado
    printf("\nMatriz Resultado\n");
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            printf("d[%i][%i]=%.2f  ",i,j,res[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}