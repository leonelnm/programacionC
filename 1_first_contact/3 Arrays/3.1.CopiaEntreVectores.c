#include <stdio.h>


int main(int argc, char const *argv[])
{
    int max = 10;
    int a1[max], a2[max];

    for(int i=0; i<max; i++)
        a1[i] = i+1;
    
    printf("Vector 1: ");
    for(int i = 0; i < max; i++)
        printf("%i",a1[i]);

    printf("\nCopiar vector1 a vector2:\n");
    for(int i = 0; i < max; i++)
        a2[i] = a1[i];
    for(int i = 0; i < max; i++)
        printf("%i",a2[i]);
    
    return 0;
}
