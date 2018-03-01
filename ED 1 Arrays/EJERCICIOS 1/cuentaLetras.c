#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1000
int main(){
    char *letras = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char in[MAX];
    int l = strlen(letras), contador;

    srand(time(NULL));
    for(int i = 0; i < MAX; i++)
        in[i] = 'A' + rand()%l;

    for(int i = 0; i < l; i++)
    {
        contador=0;
        for(int j = 0; j < MAX; j++)
        {
            if(*(letras+i) == in[j])
                contador++;
        }
        printf("La letra %c aparece %i veces\n",*(letras+i), contador);
    }
    
    
    return 0;
}