#include <stdio.h>

int main(){
    int nota = 0;

    printf("====== Sobresaliente - Notables - ... ======\n");
    printf("Ingresa una nota: ");
    scanf("%i", &nota);

    switch(nota){
        case 10:
            printf("Matricula de honor\n");
            printf("Sobresaliente\n");
        break;
        case 9:
            printf("Sobresaliente\n");
        break;
        case 8:
        case 7:
            printf("Notable\n");
        break;
        case 6:
            printf("Bien\n");
        break;
        case 5:
            printf("Suficiente\n");
        break;
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            printf("Insuficiente\n");
        break;
        default:
            printf("Ingrese otra nota\n");
        break;
    }

    return 0;
}