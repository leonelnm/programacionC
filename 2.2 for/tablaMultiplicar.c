#include <stdio.h>

int main(){
    int in =0;
    printf("Tabla de multiplicar del valor ingresado hasta 10\n");

    printf("Ingrese valor: ");
    scanf("%i", &in);

    for(int i=0; i<=10; i++){
        printf ("%i * %d\t= %d\n", in, i, (i*in));
    }

    return 0;
}