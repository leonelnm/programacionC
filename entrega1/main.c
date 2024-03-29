#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "autos/autos.h"
#include "hash/hash.h"
#include "lineal/prueba_lineal.h"
#include "dependiente_clave/prueba_dependiente_clave.h"

#define SIZE 350
#define FILENAME "autos.csv"

typedef enum
{
  APP_EXIT,
  APP_LINEAL,
  APP_DEPENDIENTE_CLAVE
} HASHING_TYPE;

int showMainMenu()
{

  system("clear");
  int optionSelected = -1;

  printf("Seleccione un método para tratar colisiones:\n");
  printf("1. Prueba Lineal\n");
  printf("2. Prueba Dependiente de Clave\n");
  printf("0. Salir\n");
  printf("\nInserte el número de la opción deseada: ");
  scanf("%d", &optionSelected);

  while (optionSelected < 0 || optionSelected > 3)
  {
    printf("\nInserte opción válida 0-2: ");
    scanf("%d", &optionSelected);
  }
}

void executeSelected(int optionSelected)
{
  switch (optionSelected)
  {
  case APP_EXIT:
    printf("Adios!");
    break;

  case APP_LINEAL:
    execute_prueba_lineal(FILENAME, SIZE);
    break;

  case APP_DEPENDIENTE_CLAVE:
    printf("DEPENDIENTE_CLAVE!");
    execute_prueba_dependiente(FILENAME, SIZE);
    break;

  default:
    printf("Opción no disponible");
    break;
  }

  printf("\n");
}

int main()
{
  
  int optionSelected = showMainMenu();
  executeSelected(optionSelected);
  
  return 0;
}
