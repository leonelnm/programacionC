//calcule la media de todos los valores e indique cuántos valores están por
//encima de la media y cuántos por debajo

#include <stdio.h>

int main(){

    int v[10] = {15,5,15,8,11,12,13,1,21,23};
    float media = 0.0f;
    int sobre, bajo;
    sobre = bajo = 0;
    for(int i=0; i<10; i++){
        media += v[i];
    }
    media = media/10;
    printf("La media de todos los numeros es: %.2f", media);

    for (int i=0; i<10; i++){
        (v[i] > media) ? sobre++ : bajo++;
    }
    printf("\nSobre la media hay %i\nBajo la media hay %i\n", sobre, bajo);

    //Salida
    printf("\nPulsa INTRO para finalizar...");
    fflush(stdin);
    char tecla = getchar();
    return 0;
}