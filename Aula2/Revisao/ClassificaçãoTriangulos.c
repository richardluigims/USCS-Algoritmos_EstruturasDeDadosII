/******************************************************************************

Objetivo: Classificar um triângulo de acordo com as medidas

Autor: Richard Mantoan

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, tamanho = 3;
    int x[tamanho];
    
    printf ("Vamos montar um triângulo?\n");
    
    for (i = 1; i <= tamanho; i++)
    {
        printf ("Insira o valor para o lado %d: ", i);
        scanf ("%d", &x[i]);
    }
    
    printf ("\n");
    
    if ((x[1] == x[2]) && (x[2] == x[3]))
    {
        printf ("Seu triângulo é equilátero!");
    }
    else 
    {
        if (x[1] != x[2] && x[2] != x[3] && x[1] != x[3])
        {
            printf ("Seu triângulo é escaleno!");
        }
        else {
            printf ("Seu triângulo é isósceles!");
        }
    }
    
    return 0;
}
