#include <stdio.h>

int main(){
    int suma =0;
    printf("Suma todos los numeros desde el 1 - 10\n");

    for(int i=0; i<=10; i++){
        printf ("%d + %d = ", suma, i);
        suma += i;
        printf("%d\n",suma);
        
    }
    printf("La suma es: %d\n", suma);

    return 0;
}