/******************************************************************************

Objetivo: Classificar um triângulo de acordo com as medidas

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
    else 
    {
        if (x1 != x2 && x2 != x3 && x1 != x3)
        {
            printf ("Seu triângulo é escaleno!");
        }
        else {
            printf ("Seu triângulo é isósceles!");
        }
    }
    
    return 0;
}
