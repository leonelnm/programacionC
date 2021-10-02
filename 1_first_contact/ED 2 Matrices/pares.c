#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5
#define NMAX 10

void initMatrix(int m[][TAM]);
void showMatrix(int m[][TAM]);

int main(){

    int m[TAM][TAM], x, y;
    srand(time(NULL));

    initMatrix(m);
    showMatrix(m);

    printf("Busquemos una coordenada XY, dime X: ");
    scanf("%i", &x);
    printf("Dime Y: ");
    scanf("%i", &y);

    printf("La direccion ingresada muestra: %d\n", m[x][y]);


    return -1;
}

void initMatrix(int m[][TAM]){

    for (int i = 0; i < TAM; i++){
        int r = 0;
        for (int j = 0; j < TAM; j++){
            r = rand() % NMAX;
            if(r%2 == 0 ){
                m[i][j] = r;
            }else{
                j--;
            }
        }
    }

}
void showMatrix(int m[][TAM]){
    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }
}
