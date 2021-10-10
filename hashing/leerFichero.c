#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct car
{
  char *car_plate;
  char *brand;
  char *model;
  int year;
  int price;
} Car;

void printCar(Car *c){
  printf("%s %s %s %d %d\n", c->car_plate, c->brand, c->model, c->year, c->price);
}

// strdup
char *getTxt(char *txt){
  char *str = (char *) malloc(sizeof(char) * (strlen(txt)+1));
  strcpy(str, txt);
  return str;
}

int leerFichero(char *nombre_fichero, Car *car_list)
{
  char linea[500]; // Para guardar la linea de cada fichero
  char *token;     // Para cada token de cada linea

  //Abrimos el fichero
  FILE *fp = fopen(nombre_fichero, "r");

  // Comprobar que no hay error al abrir
  if (fp == NULL)
  {
    printf("Error de lectura del archivo");
    return -1;
  }

  int index = 0;
  // Recorremos cada linea del fichero
  while (fgets(linea, 500, fp) != NULL)
  {
    token = strtok(linea, ","); // Separamos cada linea por ","

    char *tmp_car_plate = token;
    char *tmp_brand = strtok(NULL, ",");
    char *tmp_model = strtok(NULL, ",");
    char *tmp_year = strtok(NULL, ",");
    char *tmp_price = strtok(NULL, ",");

    Car car_temp;
    car_temp.car_plate = getTxt(tmp_car_plate);
    car_temp.brand = getTxt(tmp_brand);
    car_temp.model = getTxt(tmp_model);
    car_temp.year = atoi(tmp_year);
    car_temp.price = atoi(tmp_price);

    car_list[index] = car_temp;
    index++;
  }

  return 0;
}

int main(int argc, char *argv[])
{

  Car *car_list = malloc(sizeof(Car) * 350);
  char *file_name = "autos.csv";

  leerFichero(file_name, car_list);

  printCar(&car_list[0]);

  free(car_list);
  return 0;
}
