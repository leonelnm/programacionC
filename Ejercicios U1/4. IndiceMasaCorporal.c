//Programa: Calcula indice de masa corporal, inserta datos de entrada

#include <stdio.h>

int main(){
    //Declaración variables
    char Nombre[15],apellidos[15],direccion[15];
    int edad = 0;
    float peso, altura;
    float imc;

    //Pedir datos
    printf("Nombre: ");
    scanf("%s", Nombre);
    printf("apellidos: ");
    scanf("%s", apellidos);
    printf("direccion: ");
    scanf("%s", direccion);
    printf("edad: ");
    scanf("%i", &edad);
    printf("peso (kg): ");
    scanf("%f", &peso);
    printf("altura (cm): ");
    scanf("%f", &altura);

    //Calcular IMC
    altura = altura / 100;
    imc = (peso/(altura*altura));

    if (imc >30) printf("Usted tiene obesidad\n");

    printf("%s, %s de %i tiene un I.M.C = %f\n",Nombre,apellidos,edad,imc);
    return 0;
}