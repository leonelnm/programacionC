#include <stdio.h>
#include <string.h>


int main(){
    char in[15];

    printf("Escribe una cadena: ");
    scanf("%[^\n]",in);

    int i = 0;

    while(in[i] != '\0' ){
        i++;
    
    }
    printf("Longitud = %i\n",i);

    printf("%d longitud con strlen\n",(int)strlen(in));
   

    return 0;
}