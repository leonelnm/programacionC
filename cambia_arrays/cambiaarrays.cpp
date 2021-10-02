#include <stdio.h>
#include <stdlib.h>

void cambia(int **a1, int **a2 ) {  // No se permite recorrer los arrays ni copiar los valores
                     // a un tercer array auxiliar
    int* aux = *a1; 
    *a1 = *a2;
    *a2 = aux;

}

int main()
{
      int *a1, *a2;

      a1 = (int *) malloc(10*sizeof(int));
      a2 = (int *) malloc(5*sizeof(int));

      for(int i = 0; i < 9; i++) {
           a1[i] = i;
      }

      for(int i = 0; i < 4; i++) {
           a2[i] = 10 + i;
      }


      for(int i = 0; i < 4; i++) {
           printf("Antes de cambiar %d, %d\n", a1[i], a2[i]);
      }

      cambia(&a1, &a2); //pasar a1 y a2

      for(int i = 0; i < 4; i++) {
           printf("Despues de cambiar %d, %d\n", a1[i], a2[i]);
      }



      return 0;
}
