/******************************************************************************

Objetivo: Impressão de contagem regressiva de um número inteiro até zero.

Autor: Richard Luigi Mantoan Stopa
Data: 09/02/2022

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num=0, i;
    
    printf ("Digite um número para a contagem regressiva: ");
    scanf ("%d", &num);
    
    for (i = num; i >= 0; i--)
    {
        printf ("%d\n", i);
    }
    
    return 0;
}
