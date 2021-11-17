void execute_prueba_dependiente(char *filename, int size);

// Returns position where it was inserted otherwise return NOT_INSERT
int insert_dependiente(Car car, HashReg *t_hash, int size, int *collision_counter);

// Returns position if it's found otherwise return NOT_FOUND
int search_dependiente(HashReg *t_hash, int size, int *collision_counter);

// Returns position if it's found and delete otherwise return NOT_FOUND
int del_dependiente(char *matricula, HashReg *t_hash, int size);

void executeInternalAction_dependiente(int actionSelected, HashReg *list, int size);

int G_dependiente(int k, int collision, int size);

int isAvailable_dependiente(int status);