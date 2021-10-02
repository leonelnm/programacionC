#include <stdio.h>

int main(){

    int num,suma;
    suma = 0;

    for(int i=0; i<5; i++){

        printf("Ingresa: ");
        scanf("%d",&num);

        suma += num;

    }
    printf("La suma es: %i\n",suma);

    return 0;
}