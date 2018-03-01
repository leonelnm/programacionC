#include <stdio.h>


int main(){

    char in[100];
    int i = 0;

    printf("Inserta una frase: ");
    scanf("%[^\n]",in);

    do
    {
        if(in[i] != ' ')
            printf("%c", in[i]);
        else
            printf("\n");
        i++;    
        
    } while (in[i] != '\0');
    printf("\n------ FIN ------\n");

    return 0;
}