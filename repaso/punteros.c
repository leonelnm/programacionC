#include <stdio.h>

int main(){

  int number = 123;
  int *puntero = &number;

  printf("Direccion Puntero %p\n", &puntero);
  printf("Direccion Variable %p\n", &number);


  printf("1. Contenido P %d\n", *puntero);
  printf("2. Contenido V %d\n", number);
  
  *puntero = 777;
  printf("2. Contenido P %d\n", *puntero);
  printf("2. Contenido V %d\n", number);

  number = 600;
  printf("3. Contenido P %d\n", *puntero);
  printf("3. Contenido V %d\n", number);


  // Arrays
  int arr[] = {10, 20, 30, 40};
  int *p_arr = &arr;
  printf("Direccion inicial Array %p\n", p_arr);

  for(int i=0; i< 4; i++){
    printf("Direccion [%d] %p : %d\n", i, p_arr+i, *p_arr+i);
  }


  return -1;
}