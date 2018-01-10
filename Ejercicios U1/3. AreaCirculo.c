//Programa: Area de un circulo del radio insertado

#include <stdio.h>

#define PI 3.141592

int main(){
    int radio = 0;
    double area = 0;

    printf("Inserte el radio del circulo en cm: ");
    scanf("%i", &radio);

    area = PI * (radio * radio);

    printf("El area del circulo es: %.3f cm²\n", area);

    return 0;
}