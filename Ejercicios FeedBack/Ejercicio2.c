//dado un array de 10 enteros (introducidos a mano en el
//código), calcule la diferencia entre el valor menor y el mayor.

#include <stdio.h>

int main(){
    int max, min;
    int v[10] = {15,5,7,29,11,12,13,17,21,23};

//Asignamos el primer valor del vector a max y min
    max = min = v[0];
//MAX
    for (int i=0; i<10; i++){
        if(v[i] > max) max = v[i];
        if(v[i] < min) min = v[i];
    }
    printf("Mayor %i - Menor %i = %i", max, min, (max-min));

//Salida
    printf("\nPulsa INTRO para finalizar...");
    fflush(stdin);
    char tecla = getchar();
    return 0;
}