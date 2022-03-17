/******************************************************************************

Objetivo: Escreva um programa que implemente uma função que passe dado número inteiro como parâmetro, e este
desenhe um número equivalente a "*" na tela.

Autor: Richard
Data: 16/03/2002

*******************************************************************************/
#include <stdio.h>

int Asterisco (int a)
{
    for (int i = 0; i <= a; i++)
    {
        printf ("*");
    }
}

int main()
{
    int n = 0;
    
    printf ("Vamos escrever asteriscos!\n");
    printf ("Digite um número: ");
    scanf ("%d", &n);
    printf ("\n");
    
    Asterisco (n);
    
    return 0;
}
