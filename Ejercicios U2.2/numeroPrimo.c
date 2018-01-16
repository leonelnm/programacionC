#include <stdio.h>
#include <math.h>

int main(){

    unsigned long int num,num2;
    
    //float num2;

    printf("\tCalcula si un numero es primo\n");
    printf("Ingrese numero: ");
    scanf("%li", &num);
   
    int i=2;
        while(i <= (int)sqrt(num)){
           // num2 = num%i;
            if((num%i) == 0){
                printf("%li no es primo, es divisible por %i\n",num,i);
                printf("%li / %i = %li\n",num,i,(num/i));
                break;
            }
            if(((i == (int)sqrt(num))) && ((num%i) != 0)) printf("%li es primo\n", num);

            i++;
        }

    return 0;
}
