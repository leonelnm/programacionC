#include "../autos/autos.h"
#include "../hash/hash.h"
#include "prueba_lineal.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void execute_prueba_lineal(char *filename, int size)
{
  printf("\n*****\tInicio Prueba Lineal\t*****\n");
  // Carga la info del CSV
  Car *dataCsv = get_data_from_csv(filename, size);

  // Inicializa la tabla hash vacía
  HashReg *hashReg = init(size);

  int collision_counter = 0;
  // Inserta todos los valores
  for (int i = 0; i < size; i++)
  {
    if(NOT_INSERTED == insert(dataCsv[i], hashReg, size, &collision_counter)){
      printf("%s Not inserted\n", dataCsv[i].matricula);
    }
  }

  printf("PRUEBA-LINEAL\tColisiones totales luego de insertar todos los registros: %d\n", collision_counter);

  int actionSelected;
  do {
    actionSelected = show_menu_hash();
    executeInternalAction(actionSelected, hashReg, size);

  } while (ACTION_EXIT != actionSelected);

  // liberar
  destroy_car_list(&dataCsv, size);
  free(hashReg);
}

void executeInternalAction(int actionSelected, HashReg *list, int size)
{
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
    search(list, size, &collision_counter);

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

int G(int k, int collision, int size){
  return (k + collision) % size;
}

int insert(Car car, HashReg *t_hash, int size, int *collision_counter)
{
  int inserted = NOT_INSERTED;

  // Calcula primer k
  int pos = H(car.matricula, size);

  // Crea el Registro a Insertar
  HashReg reg;
  reg.status = OCUPADO;
  reg.car = car;
  reg.car.originalkey = pos;

  int nCollisions = 0;

  if (TRUE == isAvailable(t_hash[pos].status)){
    reg.car.finalkey = pos;
    reg.car.attempts = nCollisions;
    t_hash[pos] = reg;
    inserted = pos;
  }else{

    int newPos;
    nCollisions = 1;
    for (int i = 0; i < size-1; i++)
    {
      newPos = G(pos, nCollisions, size);
      if (TRUE == isAvailable(t_hash[newPos].status)){
        reg.car.finalkey = newPos;
        reg.car.attempts = nCollisions;
        t_hash[newPos] = reg;
        inserted = newPos;
        break;
      }else{
        nCollisions++;
      }
    }

    *collision_counter += nCollisions;
  }

  return inserted;
}

int search(HashReg *t_hash, int size, int *collision_counter){

  char *matricula = get_matricula_user();
  printf("\nMatricula a buscar: --%s--\n", matricula);

  int pos = H(matricula, size);
  int found = NOT_FOUND;

  Car car;
  int attempts = 0;

  if(OCUPADO == t_hash[pos].status && strcmp(matricula, t_hash[pos].car.matricula) == TRUE){
    car = t_hash[pos].car;
    found = pos;
  }else{
    attempts = 1;
    int newPos;
    for (int i = 0; i < size-1; i++)
    {
      newPos = G(pos, attempts, size);
      if(LIBRE == t_hash[newPos].status){
        break;
      }

      if(OCUPADO == t_hash[newPos].status && strcmp(matricula, t_hash[newPos].car.matricula) == TRUE){
        car = t_hash[newPos].car;
        found = newPos;
        break;
      }

      attempts++;
    }

  }
  
  if(NOT_FOUND == found){
    printf("%s no encontrada\n", matricula);
  }else{
    print_car(&car);
  }

  printf("Intentos: %d\n", attempts);
  *collision_counter = attempts;

  return found;
}

int del(char *matricula, HashReg *t_hash, int size){

}


int isAvailable(int status){
  int response = FALSE;

  if(LIBRE == status || BORRADO == status){
    response = TRUE;
  }

  return response;
}