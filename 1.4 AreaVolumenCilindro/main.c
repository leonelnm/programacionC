#include <stdio.h>

#define pi 3.1416

int main(){

    float r,h,a,v = 0.0f;

    printf("Area y Volume de un Cilindro\n");
    printf("Ingresa radio: ");
    scanf("%f",&r);
    printf("Ingresa altura: ");
    scanf("%f",&h);
//Se calcula siempre que los valores introducidos sean >0

    if(r>0 && h>0){
        //Calcula area
        a = 2 * pi * r * (r + h);

        //Calcula volumen
        v = (pi * (r*r) * h);
    }else{
        printf("Son necesarios valores positivos, mayores a 0\n");
        return 0;
    }
    printf("El area del cilindro es: %.2f\n",a);
    printf("El volumen del cilindro es: %.2f\n",v);

    return 0;
}