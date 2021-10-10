#include "autos.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_car(Car *c){
  printf("%s %s %s %d %d\n", c->matricula, c->marca, c->modelo, c->anio, c->precio);
}

void print_car_by_index(Car **list, int index){
  print_car(&(*list)[index]);
}

// strdup
char *getTxt(char *txt){
  char *str = (char *) malloc(sizeof(char) * (strlen(txt)+1));
  strcpy(str, txt);
  return str;
}

Car *get_data_from_csv(char *filename, int size){

  //Abrimos el fichero
  FILE *fp = fopen(filename, "r");

  // Comprobar que no hay error al abrir
  if (fp == NULL)
  {
    printf("Error de lectura del archivo");
    return NULL;
  }

  Car *car_list = malloc(sizeof(Car) * size);

  char linea[500]; // Para guardar la linea de cada fichero
  char *token;     // Para cada token de cada linea
  int index = 0;

  // Recorremos cada linea del fichero
  while (fgets(linea, 500, fp) != NULL)
  {
    token = strtok(linea, ","); // Separamos cada linea por ","

    char *tmpMatricula = token;
    char *tmpMarca = strtok(NULL, ",");
    char *tmpModelo = strtok(NULL, ",");
    char *tmpAnio = strtok(NULL, ",");
    char *tmpPrecio = strtok(NULL, ",");

    Car car;
    car.matricula = getTxt(tmpMatricula);
    car.marca = getTxt(tmpMarca);
    car.modelo = getTxt(tmpModelo);
    car.anio = atoi(tmpAnio);
    car.precio = atoi(tmpPrecio);

    car_list[index] = car;
    index++;
  }

  return car_list;

}

void destroy_car_list(Car **carList, int size){

  for (int i = 0; i < size; i++)
  {
    free((*carList[i]).matricula);
    free((*carList[i]).modelo);
    free((*carList[i]).marca);
  }

  free(*carList);
}

void destroy_car(Car *car){
  free(car->matricula);
  free(car->marca);
  free(car->modelo);
}