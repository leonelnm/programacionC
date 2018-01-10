#include <stdio.h>

int main(){

    int edad = 0;

    printf("========    CALCULA EDAD    ========\n");
    printf("Ingrese edad: ");
    scanf("%i", &edad);

    if (edad < 0 || edad > 115){
        printf("Ingrese una edad correcta");
    }else if(edad >= 18){
        printf("Ud es mayor de edad");
    }else {
        printf("Ud es menor de edad");
    }


    return 0;
}