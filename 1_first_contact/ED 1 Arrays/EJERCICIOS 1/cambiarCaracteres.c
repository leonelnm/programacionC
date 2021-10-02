#include <stdio.h>
#include <ctype.h>

int main(){

    char cadena[100];

    printf("Inserte una cadena de caracteres y digitos: ");
    scanf("%[^\n]", cadena);

    for(int i = 0; i < 10; i++)
    {
        if(isupper(cadena[i]))
            cadena[i] = tolower(cadena[i]);
        else
            cadena[i] = toupper(cadena[i]);
        if(isdigit(cadena[i]))
            cadena[i] = '.';
        
    }
    

    printf("Cambiada==>%s\n", cadena);
    return 0;
}