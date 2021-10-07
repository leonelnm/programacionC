#include <stdio.h>
#include <math.h>

int main(){
  int number = 12345;
  printf("int size of: %d(%lu)\n", number, sizeof(int));

  char chracter = 0x40;
  printf("char size of: %c(%lu)\n", chracter, sizeof(char));

  printf("float size of: (%lu)\n", sizeof(float));
  printf("double size of: (%lu)\n", sizeof(double));

  double insert;
  printf("Insert number: ");
  scanf("%lf", &insert);
  printf("Valor insertado: %lf\n", sqrt(insert));

  return -1;
}