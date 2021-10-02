#include <stdio.h>

#include <stdio.h>

#define COLUMS 10
#define ROWS 11

void initMatrix(int m[ROWS][COLUMS]);
void showMatrix(int m[][COLUMS]);
void calcMatrix(int m[ROWS][COLUMS]);

int main(){

    int m[ROWS][COLUMS];

    initMatrix(m);
    calcMatrix(m);
    showMatrix(m);

    return -1;
}

void initMatrix(int m[ROWS][COLUMS]){

    int cont = 1;
    for(int i = 0; i < ROWS-1; i++)
    {
        for(int j = 0; j < COLUMS; j++)
        {
            m[i][j] = cont++;
        }
        
    }

}

void calcMatrix(int m[ROWS][COLUMS]){
    
    for(int i = 0; i < COLUMS; i++){
        int r = 0;
        for(int j = 0; j < ROWS-1; j++){
            r += m[j][i];
        }
        
        for(int k = ROWS-1; k < ROWS; k++){
            m[k][i] = r;
        }
        
    }

}

void showMatrix(int m[][COLUMS]){
    for(int i=0; i<ROWS; i++){
        for(int j=0; j<COLUMS; j++){
            printf("%d  ", m[i][j]);
        }
        printf("\n");
    }
}
