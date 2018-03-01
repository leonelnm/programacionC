
 #include <stdio.h>
 #include <string.h>

 void main()
 {
   //Declaraci�n e inicializaci�n de los arrays
   char cadena1[] = "buenos dias012";
   char cadena2[] = "012";
   int posicion;
   
   //Guardamos en la variable posicion la primera posici�n
   //donde aparece un caracter de la cadena2 en la cadena1
   posicion=strcspn( cadena1, cadena2 );
   
   printf("Cadena1 = %s\n",cadena1);
   printf("Cadena2 = %s\n",cadena2);
   printf("Posicion = %d\n", posicion);


 }


