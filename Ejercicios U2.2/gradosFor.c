#include <stdio.h>

int main(){

    float far, cent;
    cent = 0.0f;
    far = 0.0f;
    
    for(far; far<=300; far+=20){

        cent = ((5*(far-32))/9);

        printf("%.2f ºF \t %.2f ºC\n",far,cent);

    }

    return 0;
}

