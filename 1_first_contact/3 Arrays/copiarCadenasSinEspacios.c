//Este programa permite:
//introducir una cadena de caracteres y lo copie en otra
//eliminando los espacios.

#include <stdio.h>

#define SIZE 100

int main(){

    char cad1[SIZE];
    char cad2[SIZE];
    int espacio=0, cont2=0;

    printf("Ingresa tu cadena: ");
    scanf("%[^\n]",cad1);

    for(int i = 0; i < SIZE; i++)
    {
        if(cad1[i] == 32) espacio++;
        else {
            cad2[cont2] = cad1[i];
            cont2++;
        }
    }
    printf("%s\n",cad1);
    printf("Espacios eliminados %i \n", espacio);
    printf("%s\n",cad2);
    



    return 0;
}