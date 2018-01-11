#include <stdio.h>

int main(){
    int i,j;

    printf("Ingrese dos numeros, N1 N2:  ");
    scanf("%d %d",&i, &j);

    if(i==j) printf("Son iguales %i == %i\n",i ,j);
    if(i>j) printf("%d > %d\n", i, j);
    if(j>i) printf("%d > %d\n", j, i);

    return 0;
}