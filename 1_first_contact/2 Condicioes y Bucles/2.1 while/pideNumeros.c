#include <stdio.h>

int main(){

    int in,out,contador;
    in = 0;
    out = 0;
    contador = 0;

    printf("Calcula la media de 5 valores enteros\n");

    while(contador < 5){
        printf("Ingrese numero %i: ",contador);
        scanf("%i", &in);
        out += in;
        printf("La suma es: %i\n",out);
        contador++;
    }
    printf("El promedio es: %d\n", (out/5));

    return 0;
}