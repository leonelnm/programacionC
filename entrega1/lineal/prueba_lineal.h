void execute_prueba_lineal(char *filename, int size);

// Returns position where it was inserted otherwise return NOT_INSERT
int insert(Car car, HashReg *t_hash, int size, int *collision_counter);

// Returns position if it's found otherwise return NOT_FOUND
int search(HashReg *t_hash, int size, int *collision_counter);

// Returns position if it's found and delete otherwise return NOT_FOUND
int del(char *matricula, HashReg *t_hash, int size);

void executeInternalAction(int actionSelected, HashReg *list, int size);

int G(int k, int collision, int size);

int isAvailable(int status);