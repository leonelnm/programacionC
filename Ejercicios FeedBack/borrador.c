#include <stdio.h>
#include <math.h>

int main(){

    int raiz, primo, cont, n = 7;
    
        raiz = (int) sqrt(n);
        cont = 0;
        for (int i=1; i<=raiz; i++){
            if(n%i == 0) 
                cont++;
        printf("%d = ", cont );
        }
        if (cont == 1)
            primo++;


    printf("Existen %i primos en el vector v",primo);

    return 0;
}
