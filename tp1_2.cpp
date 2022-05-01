#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int cuadrado(int a);
void cuadrado2(int a);
void conversion(int numero);
void invertir(int a, int b);
void orden(int a, int b);


int main()
{
    int num1, num2;
    int x, y;
    printf("Ingrese un numero entero[A]:");
    scanf("%i",num1);
    printf("\nIngrese otro numero entero[B]:");
    scanf("%i",num2);

    x = num1;
    y = num2;
    invertir(num1,num2);
    printf("\nLos valores pasarían de A=%i y B=%i, a A=%i y B=%i", x, y, num1, num2);
    orden(num1,num2);
    printf("\nLos valores pasarían de A=%i y B=%i, a A=%i y B=%i", x, y, num1, num2);
    
    return 0;
}

int cuadrado(int a)
{
    int resultado = a*a;
    return resultado;
}

void cuadrado2(int a)
{
    int resultado = a*a;
}

void conversion(int numero)
{
    int direc;
    printf("\nVariable: %i",numero);
    printf("\nDirec. mem. variable:%i",&numero);
}

void invertir(int a, int b)
{
    int a2, b2;
    a2 = a, b2 = b;
    a = b2, b = a2;
}

void orden(int a, int b)
{
    if (a > b)
    {
        int a2, b2;
        a2 = a, b2 = b;
        a = b2, b = a2;
    }
}