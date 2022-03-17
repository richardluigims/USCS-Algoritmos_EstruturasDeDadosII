/******************************************************************************

Objetivo: Função troca de valores.

Autor: Richard
Data: 16/03/2022

*******************************************************************************/
#include <stdio.h>

void Troca (int * a, int * b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int a = 10, b = 5;
    
    Troca (&a, &b);
    
    printf("O valor de A é %d e o valor de B é %d.", a, b);

    return 0;
}
