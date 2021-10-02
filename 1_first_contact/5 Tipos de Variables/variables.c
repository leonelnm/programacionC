#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimir(){
    static int var1 = 0;  //con static se almacena el valor entre llamadas a funcion
    int var2 = 0;
    var1=var1 + 1;
    var2=var2 + 1;
    printf("var1 = %d var2 = %d\n", var1,var2);
}
    
int main(void){

    for (int i=0; i < 3; i++)
        imprimir();

    return 0;
}