typedef struct car
{
  char *matricula;
  char *marca;
  char *modelo;
  int anio;
  int precio;
  int originalkey;
  int finalkey;
  int attempts;
} Car;

void print_car(Car *c);
void print_car_by_index(Car **list, int index);
Car *get_data_from_csv(char *filename, int size);
void destroy_car(Car *car);
void destroy_car_list(Car **carList, int size);
int get_key(char *matricula);

char *get_matricula_user();