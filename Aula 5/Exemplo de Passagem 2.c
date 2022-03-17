/******************************************************************************

Objetivo: Exemplo de passagem de parâmetros por referência.

Autor: Richard.
Data: 16/03/2022

*******************************************************************************/
#include <stdio.h>

int funcao_Exemplo (int * a);

int main()
{
    int a = 5, resultado;
    resultado = funcao_Exemplo (&a);
    
    printf ("a = %d", a);

    return 0;
}

int funcao_Exemplo (int * a)
{
    *a = *a * 2;
    
    return *a;
}
