#include <stdio.h>

void cambiarValorPorReferencia(int *var, int valor){
  *var = valor;
}

int main(){

  int miNumber = 5;
  printf("1. Valor: %d\n", miNumber);

  cambiarValorPorReferencia(&miNumber, 100000);
  printf("2. Valor: %d\n", miNumber);

  return 0;
}
