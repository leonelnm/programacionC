#include <stdio.h>

int main(){
    printf("Todas las tablas del 1 al 10\n");

    for(int i=1; i<=10; i++){
        for(int j = 1; j<=10; j++){
             printf ("%i * %d\t= %d\n", i, j, (i*j));
        }
        printf("\n");
    }

    return 0;
}