#include <stdio.h>
#include <stdlib.h>
int main(){
  
   int fila, n, columna;
   
   printf("Introducir tamaño tablero: ");
   scanf("%d", &n);
   
   for(fila = 0; fila < n; fila++){ 
        for(columna=0; columna < n; columna++){
            if ((fila+columna) % 2 == 0) { //si la columna es par ->Blanco
                printf("B");
            } else {
                printf("N");
            }
        }
        printf("\n"); 
   }

   return 0;
}
