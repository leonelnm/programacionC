#include <stdio.h>


int main(){
        printf("Hola Mundo\n");

        for(int i = 0; i<5 ; i++){
            printf("Hola Mundo\n");
            printf("Hola2\n");
        }
        int cont=0;
        while(cont < 5){
            printf("While \n");
           
            if (cont != 0){
                printf("---desde if");
            }
            cont+=2;
        }
    return 0;
}