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

float load_factor(HashReg *t_hash, int size){
  int elements = 0;
  for (int i = 0; i < size; i++)
  {
    if(OCUPADO == t_hash[i].status){
      elements += 1;
    }
  }
  
  return ((float) elements / size);
}

void print_hash_table(HashReg *table, int size){
  for (int i = 0; i < size; i++)
  {
    if(i%10 == 0){
      printf("\n");
    }

    printf("%s(%d)[%d]{%d}\t", table[i].car.matricula, table[i].car.originalkey, table[i].car.finalkey, table[i].car.attempts);
  }
  printf("\n");
}

int show_menu_hash(){

  printf("\n\nOpciones disponibles:\n");
  printf("1. Ver tabla hash\n");
  printf("2. Buscar\n");
  printf("3. Eliminar\n");
  printf("4. Mostrar Factor de Carga\n");
  printf("0. Salir\n");
  printf("\nSeleccione acción: ");

  int optionSelected = -1;
  scanf("%d", &optionSelected);

  while (optionSelected < 0 || optionSelected > 4)
  {
    printf("\nInserte opción válida 0-5: ");
    scanf("%d", &optionSelected);
  }

  return optionSelected;

}

int H(char *matricula, int size){
  int k = get_key(matricula);
  return (k % size);
}