//Programa que, dado un array de 10 enteros (introducidos a mano en el código),
//cuente cuántos números primos contiene.

//Para saber si un número es primo basta con probar si el número no es divisible
//por los primos hasta su raiz cuadrada
#include <stdio.h>
#include <math.h>


int main(){

    int raiz, primo, cont, n = 17;
    int v[10] = {3,5,7,9,11,12,13,17,21,23};
    primo = 0;
    for (int k=0; k<10; k++){
        raiz = (int) sqrt(v[k]);
        cont = 0;
        for (int i=1; i<=raiz; i++){
            if(v[k]%i == 0) 
                cont +=1;
        }
        if (cont == 1)
            primo += 1;

    }

    printf("Existen %i primos en el vector V",primo);


//Salida
    printf("\nPulsa INTRO para finalizar...");
    fflush(stdin);
    char tecla = getchar();
    return 0;
}
