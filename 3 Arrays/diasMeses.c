#include <stdio.h>

int main(){

    int meses[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    for(int i = 1; i < 13; i++)
        printf("Mes %i tiene %i dias\n",i,meses[i-1]);

    return 0;
}