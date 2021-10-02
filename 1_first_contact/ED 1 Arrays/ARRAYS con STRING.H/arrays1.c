
 #include <stdio.h>
 #include <stdlib.h>
 #include <conio.h>

 #define N_ELEMENTOS 6
 #define VALOR_MAXIMO 10

 int obtenerNumeroAleatorio(const int numeroMaximo);
 void visualizaArray();

 void main()
 {
     
     int i;
     //Declaraci�n e inicializaci�n del array original
     int array[N_ELEMENTOS]={1,2,3,4,5,6};
     
     system("cls");
     srand(time(NULL));
     
     printf("Datos del array original\n");
     visualizaArray(array);
     
     //Bucle para cargar los valores aleatorios a cada posici�n del array
     for(i=0;i<N_ELEMENTOS;i++)
     {
          array[i]=obtenerNumeroAleatorio(VALOR_MAXIMO);                     
     }
     
     printf("Datos del array cargado con n�meros aleatorios\n");
     visualizaArray(array);
     
     getch();
 }

 int obtenerNumeroAleatorio(const int numeroMaximo)
 {

   return(rand()%numeroMaximo);
 }

 void visualizaArray(int array[])
 {
     int i;
     
     for(i=0;i<N_ELEMENTOS;i++)
     {
          printf("array [%d] = ",i);
          printf("%d\n",array[i]);                     
     }
 }

