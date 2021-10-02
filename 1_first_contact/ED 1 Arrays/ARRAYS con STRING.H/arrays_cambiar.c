
 #include <stdio.h>
 #include <string.h>

 void main()
 {
   //Declaraci�n e inicializaci�n del array
   char cadena1[] = "buenos dias";
   char cadena2[] = "gggg";

   strncpy( cadena1, cadena2, 4 );
   
   printf("Cadena1 = %s\n",cadena1);
   printf("Cadena2 = %s\n",cadena2);

  printf("Tamaño Cadena 2 = %ld\n", strlen(cadena2));

 }


