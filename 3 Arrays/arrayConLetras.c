#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 1000
#define MAYUSCULAS 26

int main(){
    int contador,suma;
    char a[MAX];
    char letras[MAYUSCULAS];
    printf("Un array con 100 letras Mayusculas aleatorias\n");

//Rellena arrayCadena con letras desde A-Z
    srand(time(NULL));
    for(int i = 0; i < MAX; i++)
    {
        a[i] = 'A'+rand()% MAYUSCULAS;
    }
//Rellena el array de letras MAYUSCULAS
    for(int i = 0; i < MAYUSCULAS; i++)
    {
        letras[i] = i + 65;
    }

//Calcula cuantos iguales hay
    for(int i = 0; i < MAYUSCULAS; i++){
        contador =0;
        for(int j = 0; j < MAX; j++){
            if(letras[i] == a[j])
            contador++;
        }
        printf("%c = %i\n", letras[i], contador);
        suma += contador;
    }
    
    printf("El vector tiene %i Letras\n", suma);
       
    return 0;
}