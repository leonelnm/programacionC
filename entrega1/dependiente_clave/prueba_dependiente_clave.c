#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../autos/autos.h"
#include "../hash/hash.h"
#include "prueba_dependiente_clave.h"


void execute_prueba_dependiente(char *filename, int size){
  printf("\n*****\tInicio Prueba Dependiente de Clave\t*****\n");
  // Carga la info del CSV
  Car *dataCsv = get_data_from_csv(filename, size);

  // Inicializa la tabla hash vacía
  HashReg *hashReg = init(size);

  int collision_counter = 0;
  // Inserta todos los valores
  for (int i = 0; i < size; i++){
    if(NOT_INSERTED == insert_dependiente(dataCsv[i], hashReg, size, &collision_counter)){
      printf("%s Not inserted\n", dataCsv[i].matricula);
    }
  }

  printf("PRUEBA-DEPENDIENTE-CLAVE\tColisiones totales luego de insertar todos los registros: %d\n", collision_counter);

  int actionSelected;
  do {
    actionSelected = show_menu_hash();
    executeInternalAction_dependiente(actionSelected, hashReg, size);

  } while (ACTION_EXIT != actionSelected);

  // liberar
  destroy_car_list(&dataCsv, size);
  free(hashReg);
}

// Returns position where it was inserted otherwise return NOT_INSERT
int insert_dependiente(Car car, HashReg *t_hash, int size, int *collision_counter){
  return NOT_INSERTED;
}

// Returns position if it's found otherwise return NOT_FOUND
int search_dependiente(HashReg *t_hash, int size, int *collision_counter){
  return NOT_INSERTED;
}

// Returns position if it's found and delete otherwise return NOT_FOUND
int del_dependiente(char *matricula, HashReg *t_hash, int size){
  return NOT_FOUND;
}

void executeInternalAction_dependiente(int actionSelected, HashReg *list, int size){
  int collision_counter = 0;

  switch (actionSelected){
  case ACTION_EXIT:
    printf("Adios!");
    break;
  case ACTION_DELETE:
    break;

  case ACTION_SHOW_TABLE:
    print_hash_table(list, size);
    break;

  case ACTION_SEARCH:
    search_dependiente(list, size, &collision_counter);
    printf("Numero de colisiones: %d\n", collision_counter);
    break;

  case ACTION_SHOW_LOAD_FACTOR:
    {
      float factor = load_factor(list, size);
      printf("Factor de carga: %.2f --> ", factor);
      printf("%.0f%% ocupado\n", factor*100);
      break;
    }
  default:
    printf("Opción no disponible");
    break;
  }
}

int G_dependiente(int k, int collision, int size){
  return 0;
}

int isAvailable_dependiente(int status){
  return FALSE;
}
