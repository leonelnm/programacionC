#include <stdio.h>
#include <stdlib.h>

typedef struct  numb
{
  int key;
} Numb;

void printSt(Numb *n){
  printf("Key: %d\n", n->key);
}

void printByIndex(Numb **list, int index){
  printSt(&(*list)[index]);
}

int main(){

  int size = 10;

  Numb *list1 = malloc(sizeof(Numb) * size);
  for (int i = 0; i < size; i++)
  {
    Numb n;
    n.key = i*3;
    list1[i] = n;
  }
  
  for (int i = 0; i < size; i++)
  {
    printf("%d  ", list1[i].key);
  }
  printf("\n");

  printByIndex(&list1, 3);


  return 0;
}