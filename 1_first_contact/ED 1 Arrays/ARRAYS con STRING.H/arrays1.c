
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
     //Declaración e inicialización del array original
     int array[N_ELEMENTOS]={1,2,3,4,5,6};
     
     system("cls");
     srand(time(NULL));
     
     printf("Datos del array original\n");
     visualizaArray(array);
     
     //Bucle para cargar los valores aleatorios a cada posición del array
     for(i=0;i<N_ELEMENTOS;i++)
     {
          array[i]=obtenerNumeroAleatorio(VALOR_MAXIMO);                     
     }
     
     printf("Datos del array cargado con números aleatorios\n");
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

