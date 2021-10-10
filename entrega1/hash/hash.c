#include "../autos/autos.h"
#include "hash.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


HashReg *init(int size){

  HashReg *list = (HashReg *) malloc(sizeof(HashReg) * size);
  for (int i = 0; i < size; i++)
  {
    list[i].status = LIBRE;
  }

  return list;

}

void insert(Car car, Car *t_hash, int size);
int search(char *matricula, Car *t_hash, int size);
int del(char *matricula, Car *t_hash, int size);
float load_factor(Car *t_hash, int size);

void print_hash_table(HashReg *table, int size){
  for (int i = 0; i < size; i++)
  {
    if(i%10 == 0){
      printf("\n");
    }

    printf("%d\t", table[i].status);
  }
  printf("\n");
}
