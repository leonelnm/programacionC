#include <stdio.h>
#include <stdlib.h>

#define SIZE 10000000

int main(){

  double **pointers = NULL;
  pointers = malloc(SIZE * sizeof(double));

  for (int i = 0; i < SIZE; i++){
    pointers[i] =  malloc(SIZE * sizeof(double));
    if(!pointers[i]){
      printf("Out of memory %d\n", i);
      exit(1);
    }
  }
  

  for (int i = 0; i < SIZE; ++i)
    free(pointers[i]);

  free(pointers);

  return -1;
}