#include <stdio.h>
#include <omp.h>

int main(int argc, char const *argv[])
{
    
    printf("hello world!");
    int max = 100000;

    omp_set_num_threads(8);
    #pragma omp parallel for
    
    for(int i = 0; i < max; i++)
    {
        printf("hola %d\n", omp_get_num_threads() );    
    }
    

    return 0;
}
