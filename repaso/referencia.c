#include <stdio.h>

void referencia(int *counter){
  *counter += 1;
}

int main(int argc, char const *argv[])
{
  int counter = 0;

  referencia(&counter);
  referencia(&counter);
  referencia(&counter);
  referencia(&counter);

  printf("Counter %d\n", counter);

  return 0;
}
