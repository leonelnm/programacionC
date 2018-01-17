#include <stdio.h>


int main(){

    int suma = 0;
    int num = 0;
    printf("Pide un valor hasta que se introduzca -1\n");

    do{
        printf("Inserte valor: ");
        scanf("%i",&num);
        suma += num;
    }while(num != -1);
    printf("\tLa suma de todos los numeros introducidos es: %d\n", suma);

    return 0;
}