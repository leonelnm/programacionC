#define OCUPADO 0
#define LIBRE -1
#define BORRADO -2

typedef struct hashReg
{
  int status;
  Car car;
} HashReg;


HashReg *init(int size);
void insert(Car car, Car *t_hash, int size);
int search(char *matricula, Car *t_hash, int size);
int del(char *matricula, Car *t_hash, int size);
float loadfactor(Car *t_hash, int size);
void print_hash_table(HashReg *table, int size);