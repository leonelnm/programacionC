#include <stdio.h>

int main(){
    char c;
    int num1, num2;

    printf("Ingrese caracter: ");
    //scanf("%c",&c);
    c=getchar();
    /*
    printf("Ingresa valor1: ");
    scanf("%i", &num1);
    printf("Ingresa valor1: ");
    scanf("%i", &num2);
    */
    printf("Ingresa dos numeros: ");
    scanf("%d %d",&num1, &num2);

    switch(c){
        case 'x':
            printf("Multiplicacion = %i\n", (num1*num2));
            break;
        case '/':
            printf("Division = %d\n", (num1/num2));
            break;
        case '+':
            printf("Suma = %i\n", (num1+num2));
            break;
        case '-':
            printf("Resta = %i\n", (num1-num2));
            break;
        case '%':
            printf("Modulo = %d\n", (num1%num2));
            break;
        default:
            printf("Error de caracter\n");
    }


    return 0;
}