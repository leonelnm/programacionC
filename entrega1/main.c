#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "autos/autos.h"
#include "hash/hash.h"

#define SIZE 350
#define FILENAME "autos.csv"

typedef enum
{
  EXIT,
  LINEAL,
  CUADRATICA,
  DEPENDIENTE_CLAVE
} HASHING_TYPE;

int showMainMenu()
{

  system("clear");
  int optionSelected = -1;

  printf("Seleccione un método para tratar colisiones:\n");
  printf("1. Prueba Lineal\n");
  printf("2. Prueba Cuadrática\n");
  printf("3. Prueba Dependiente de Clave\n");
  printf("0. Salir\n");
  printf("\nInserte el número de la opción deseada: ");
  scanf("%d", &optionSelected);

  while (optionSelected < 0 || optionSelected > 3)
  {
    printf("\nInserte opción válida 0-3: ");
    scanf("%d", &optionSelected);
  }
}

void executeSelected(int optionSelected)
{
  HASHING_TYPE hashing = optionSelected;
  switch (hashing)
  {
  case EXIT:
    printf("Adios!");
    break;

  case LINEAL:
    printf("LINEAL!");
    break;

  case CUADRATICA:
    printf("CUADRATICA!");
    break;

  case DEPENDIENTE_CLAVE:
    printf("DEPENDIENTE_CLAVE!");
    break;

  default:
    printf("Opción no disponible");
    break;
  }

  printf("\n");
}

int main()
{
  Car *dataCsv = get_data_from_csv(FILENAME, SIZE);
  int index = 5;
  //print_car(&dataCsv[index]);
  //print_car_by_index(&dataCsv, index);

  HashReg *hashReg = init(SIZE);
  //print_hash_table(hashReg, SIZE);

  int optionSelected = showMainMenu();
  executeSelected(optionSelected);

  free(hashReg);
  return 0;
}
