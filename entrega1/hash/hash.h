#define OCUPADO 0
#define LIBRE -1
#define BORRADO -2
#define NOT_FOUND -3
#define NOT_INSERTED -4

typedef struct hashReg
{
  int status;
  Car car;
} HashReg;

typedef enum
{
  ACTION_EXIT,
  ACTION_SHOW_TABLE,
  ACTION_SEARCH,
  ACTION_DELETE,
  ACTION_SHOW_LOAD_FACTOR
} ACTIONS_TYPE;

typedef enum{
  TRUE, FALSE
} BOOLEAN;

HashReg *init(int size);
float load_factor(HashReg *t_hash, int size);
void print_hash_table(HashReg *table, int size);

int show_menu_hash();

int H(char *matricla, int size);