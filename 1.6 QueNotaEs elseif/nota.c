#include <stdio.h>

int main(){
    float nota = 0.0f;

    printf("====== Sobresaliente - Notables - ... ======\n");
    printf("Ingresa una nota: ");
    scanf("%f", &nota);

    if (nota < 0 || nota > 10) printf("Ingrese otra nota\n");
    else if (nota == 10) printf("Matricula de honor\n");
    else if (nota >= 9) printf("Sobresaliente\n");
    else if (nota >= 7) printf("Notable\n");
    else if (nota >= 6) printf("Bien\n");
    else if (nota >=5) printf("Suficiente\n");
    else printf("Insuficiente\n");
    

    return 0;
}