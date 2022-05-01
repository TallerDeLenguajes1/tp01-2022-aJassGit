#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hola mundo");
    int *puntero;
    int a;

    a = 9;
    *puntero = a;
    printf("\nCont puntero: %i", *puntero);
    printf("\nDir. guardada por puntero: %i", &*puntero);
    printf("\nDir. variable: %i", &*puntero);
    printf("\nDir. puntero: %i", &puntero);
    
    printf("\nTamanio de variable: %i", sizeof(a));
    return 0;
}