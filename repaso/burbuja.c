#include <stdio.h>
#define MAX 10

int main(){

  // Ordenar de mayor a menor
  int values[MAX] = {5,3,4,8,9,7,-21,1,20,1};

  int aux;
  int intercambios = 0;
  for (int i = 0; i < MAX-1; i++){
    for (int j = 0; j < MAX-1; j++){
      if(values[j] > values[j+1]){
        aux = values[j];
        values[j] = values[j+1];
        values[j+1] = aux;

        intercambios++;
      }
    }

  }

  
  for(int i=0; i<MAX; i++){
    printf("%d ", values[i]);
  }
  printf("\nIntercambios %d\n", intercambios);

  return -1;
}