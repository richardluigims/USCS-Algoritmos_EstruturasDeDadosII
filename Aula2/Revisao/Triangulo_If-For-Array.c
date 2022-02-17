/******************************************************************************

Objetivo: Classificar um triângulo de acordo com as medidas

Autor: Richard Mantoan
Data: 16/02/2022

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, tamanho = 2;
    int x[tamanho];
    
    printf ("Vamos montar um triângulo?\n");
    printf ("\n");
    
    for (i = 0; i <= tamanho; i++)
    {
        printf ("Insira o valor para o lado %d: ", i + 1);
        scanf ("%d", &x[i]);
    }  
    
    printf ("\n");
    
    if ((x[0] == x[1]) && (x[1] == x[2]))
    {
        printf ("Seu triângulo é equilátero!");
    }
    else 
    {
        if (x[0] != x[1] && x[1] != x[2] && x[0] != x[2])
        {
            printf ("Seu triângulo é escaleno!");
        }
        else {
            printf ("Seu triângulo é isósceles!");
        }
    }
    
    return 0;
}
