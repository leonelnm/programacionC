//Programa: Multiplicacion de 4 numeros

#include <stdio.h>

int main(){
    long int resultado = 1;
    int num =0;
    
    for(int i = 0; i<4; i++){
        printf("Ingrese numero: ");
        scanf("%i", &num);
        resultado *= num;
    }
    printf ("Multiplicación = %li\n", resultado);
    return 0;
}