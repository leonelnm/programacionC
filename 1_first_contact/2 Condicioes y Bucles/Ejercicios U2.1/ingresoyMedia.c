#include <stdio.h>

int main(){

    float in, out;
    int conteo = 0;;
    in = 0.0f;
    out = 0.0f;
    
    while(in != 999){

        printf("Ingrese un numero: ");
        scanf("%f", &in);

        if(in == 999){
            break;
        } else{
            out += in;
            conteo ++;
        }
    }
    if(conteo){
        out /= conteo;
        printf("La media de los numeros es: %.2f\n", out);
    } else {
        printf("No hay valores insertados\n");
    }
    return 0;
}