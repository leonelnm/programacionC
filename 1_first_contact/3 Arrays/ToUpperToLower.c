#include <stdio.h>
#include <ctype.h>

int main(){
    int max = 30;
    char cadena[max];
    
    printf("Ingresar cadena: ");
    scanf("%[^\n]",cadena);
    
    for(int i = 0; i != max; i++){
        if(isupper(cadena[i]))
            cadena[i] = tolower(cadena[i]);
        else
            cadena[i] = toupper(cadena[i]);
        if(isdigit(cadena[i]))
            cadena[i] = '.';
        
    }
    printf("%s\n", cadena);
    



    return 0;
}