//dado un array de 10 enteros (introducidos a mano en el código), 
//calcule la diferencia entre la posición del valor mayor y la del valor menor (si
//la diferencia es negativa, querrá decir que el valor menor aparece después del mayor)
#include <stdio.h>

int main(){
    int max, min, x, y;
    int v[10] = {15,5,7,29,11,12,13,1,21,23};
    x=y=0;
//Asignamos el primer valor del vector a max y min
    max = min = v[0];
//MAX
    for (int i=0; i<10; i++){
        if(v[i] > max) {
            max = v[i];
            x=i;
        }
        if(v[i] < min) {
            min = v[i];
            y=i;
        }
    }
    printf("Mayor %i - Menor %i = %i\n", max, min, (max-min));
    printf("Diferencia Posiciones = %i \n", (x-y));
//Salida
    printf("\nPulsa INTRO para finalizar...");
    fflush(stdin);
    char tecla = getchar();
    return 0;
}