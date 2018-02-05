//Realiza un programa que haga lo mismo que la función strcpy(), es decir que copie
//una cadena en otra.

#include <stdio.h>
#include <stdlib.h>

int main(){
    char *c1, *c2;

    int memSize = (int)(100 * sizeof(char));
    c1 = (char*) malloc (memSize);
    c2 = (char*) malloc (memSize);

    printf("Ingrese cadena: ");
    scanf("%[^\n]",c1);

    for(int i=0; i<memSize; i++) c2[i]=c1[i];
    printf("%s\n",c1);
    printf("%s\n",c2);

    free(c1);
    free(c2);

    return 0;
}