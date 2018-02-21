#include <stdio.h>

int main(){

    int d,c,e;
    int *pd, *pc, *pe;

    d=8;
    c=5;
    e=6;

    pd = &d;
    pc = &c;
    pe = &e;

    printf("%u\n", *pd);    //%u sirve para imprimir el valor del puntero
    //%p sirve para imprimir el valor de la dirección del puntero
    printf("%p\n", pe);
    printf("%p\n", pc);
    printf("%p\n", pe);

    *pd += 16;
    printf("%d\n", d);
    printf("%u\n", *pd);

    
    return 0;
}