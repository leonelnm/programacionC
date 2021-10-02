#include <stdio.h>

int main(){

    printf("El tamano de short (entero corto), es: %d\n", sizeof(short));
    printf("El tamano de int (entero), es: %d\n", sizeof(int));
    printf("El tamano de long (entero largo), es: %d\n", sizeof(long));
    printf("El tamano de double, es: %d\n", sizeof(double));
    printf("El tamano de un float es: %f\n", sizeof(float));
    printf("El tamano de un char es: %i\n", sizeof(char));

    return 0;
}