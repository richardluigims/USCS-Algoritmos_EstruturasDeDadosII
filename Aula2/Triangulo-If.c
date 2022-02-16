/******************************************************************************

Objetivo: Classificar um triângulo de acordo com as medidas

equilátero = todos iguais

isósceles = dois iguais

escaleno = todos diferentes

Autor: Richard Mantoan

*******************************************************************************/
#include <stdio.h>

int main()
{
    float x1, x2, x3;
    
    printf ("Vamos montar um triângulo?\n");
    
    printf ("\nInsira o valor para o lado 1: ");
    scanf ("%f", &x1);
    printf ("Insira o valor para o lado 2: ");
    scanf ("%f", &x2);
    printf ("Insira o valor para o lado 3: ");
    scanf ("%f", &x3);
    
    printf ("\n");
    
    if ((x1 == x2) && (x2 == x3))
    {
        printf ("Seu triângulo é equilátero!");
    }
    if ((x1 == x2) && (x2 != x3))
    {
        printf ("Seu triângulo é isósceles!");
    }
    if ((x2 == x3) && (x3 != x1))
    {
        printf ("Seu triângulo é isósceles!");
    }
    if ((x1 == x3) && (x3 != x2))
    {
        printf ("Seu triângulo é isósceles!");
    }
    if ((x1 != x2) && (x2 != x3) && (x1 != x3))
    {
        printf ("Seu triângulo é escaleno!");
    }
    
    return 0;
}
