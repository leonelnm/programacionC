#include <stdio.h>

int main(){

    int max = 10;
    char cadena[max],out[max];
    
    printf("Ingresar cadena: ");
    scanf("%[^\n]",cadena);   //%[^\n] leerá todo hasta pulsar enter
    
    //Con for
    for(int i = 0; i <= max; i++)
    {
        if(cadena[i] != ' ')
            printf("%c",cadena[i]);
        else
            printf("\n");
        if(cadena[i] == '\0')
            break;
    }
    printf("\n----Fin---- \n");

    //Con While
    int i=0;
    do{

        if(cadena[i] != ' ')
            printf("%c",cadena[i]);
        else
            printf("\n");
        i++;
    }while(cadena[i] != '\0');
    printf("\n----Fin---- \n");
    
    return 0;
   
}