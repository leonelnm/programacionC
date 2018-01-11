#include <stdio.h>

int main(){
    
    int i, j;

    printf("Ingrese 2 numeros, v1 v2: ");
    scanf("%d %d", &i, &j);

    printf("Suma: %d\n", (i+j));
    printf("Resta: %d\n", (i-j));
    printf("Multiplicacion: %d\n", (i*j));
    printf("Division: %d\n", (i/j));

    return 0;
}