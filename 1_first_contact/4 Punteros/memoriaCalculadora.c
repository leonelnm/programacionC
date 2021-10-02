#include <stdio.h>

int mostrarMenu(){
    int op = 0;
    printf("\n\n1. Ver valor actaul de memoria\n");
    printf("2. Nuevo valor a la memoria\n");
    printf("3. Multiplicar el contenido de la memoria por un valor\n");
    printf("4. Sumar un numero al contenido de la memoria\n");
    printf("5. Dividir entre un numero el contenido de la memoria\n");
    printf("6. Restar un numero al contenido de la memoria\n");
    printf("7. Salir\n");
    printf("\n\nInserte una opcion: ");
    scanf("%i", &op);
    return op;
}

void nuevoValor(float *memoria){
    printf("\nIngresa nuevo valor: ");
    scanf("%f", memoria);
    return;
}
void multiplicar(float *m, float v){
    printf("\n\t%.2f", (*m * v));
    *m = *m*v;
    return;
}

void sumarNumero(float *m, float v){
    *m += v;
    printf("\n\t%.2f", *m);
    return;
}

void dividir(float *m, float v){
    *m /= v;
    printf("\n\t%.2f", *m);
    return;
}

void restar(float *m, float v){
    *m -= v;
    printf("\n\t%.2f", *m);
    return;
}

float leerValor(){
    float v;
    printf("\nInserta Valor: ");
    scanf("%f", &v);
    return v;
}


int main(){
    int menu = 0;
    float memoria = 0;
    float valor;

    while(menu != 7)
    {
        menu = mostrarMenu();
        switch (menu)
        {
        case 1:
            printf("\n\tEl valor actual de la memoria es: %.2f", memoria);
            break;
        case 2:
            nuevoValor(&memoria);
            break;
        case 3:
            valor = leerValor();
            multiplicar(&memoria, valor);
            break;
        case 4:
            valor = leerValor();
            sumarNumero(&memoria, valor);
            break;
        case 5:
            valor = leerValor();
            dividir(&memoria, valor);
            break;
        case 6:
            valor = leerValor();
            restar(&memoria, valor);
            break;
        case 7:
            printf("\tAdios!\n");
            return 0;
        default:
            printf("\n\t Ingrese una opción válida!\n");
            break;
        }
    }
    return 0;
}