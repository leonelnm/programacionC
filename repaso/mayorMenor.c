#include <stdio.h>

int main(){
  // Buscar el menor y el mayor

  int values[10] = {5,3,4,8,9,7,-21,1,20,12};
  int menor = 1*10000;
  int mayor = 1*-10000;

  // mayor
  for (int i = 0; i < 10; i++){
    if(mayor < values[i]){
      mayor = values[i];
    }
  }

  // menor
  for (int i = 0; i < 10; i++){
    if(menor > values[i]){
      menor = values[i];
    }
  }

  printf("Mayor %d, menor %d\n", mayor, menor);

  return -1;
}