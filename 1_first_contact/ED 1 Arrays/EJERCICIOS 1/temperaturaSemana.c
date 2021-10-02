#include <stdio.h>

float calculaTemperatura(float *s){
    float media = 0.0f;
    for(int i = 0; i < 7; i++)
    {
        printf("media %.2f  -- puntero %.2f\n", media, *(s+i) );
        media += *(s+i);
    }

    media = media/7;
    return media;
}

int main(){
    float semana[7];

    for(int i = 0; i < 7; i++)
    {
        printf("Temperatura en ºC dia %i = ",i+1);
        scanf("%f",&semana[i]);
    }

    printf("La media de temperatura es: %.2fºC\n",calculaTemperatura(semana));
    

    return 0;
}