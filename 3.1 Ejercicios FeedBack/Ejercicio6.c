#include <stdio.h>

#define N 10        //para el tamaño del vector

int BuscaPares (char *cadena){
    char p,p1;
    int cont = 0;
    for(int i = 0; i < N; i++)
    {
        p = cadena[i];
        p1 = cadena[i+1];
        if (p == p1){
            cont++;
            //i += 1;
        }
    }
    return cont;
}

int main()
{
    char v[N] = "aaccccfghh";
    
    printf("\n\tHay %i parejas\n", BuscaPares(v));
    

    return 0;
}