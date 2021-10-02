#include <stdio.h>

int main(){
    int num, cifras,suma,s;
    suma = 0;


    printf("Leer un numero entero y averiguar si es o no múltiplo de 9.\n");
    printf("\n Ingrese numero: ");
    scanf("%i", &num);
    s = num;
    while(num > 9){


        while(num != 0){
            cifras = num%10;
            printf("cifras %d\n",cifras);
            suma += cifras;
            num /= 10;
            printf("%d\n",num);
        }

    }
    printf("La suma de los digitos es: %d",suma);
    if((suma%9)==0)
        printf("\n %i es multiplo de 9\n", s);
    else
        printf("\n %i no es multiplo de 9\n", s);


    return 0;
}