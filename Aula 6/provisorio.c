/******************************************************************************

Objetivo: Função que recebe 3 parâmetros inteiros: a, b e c, deve retornar em c a soma de a e b.

Autor: Richard.
Data: 23/03/2022.

*******************************************************************************/
#include <stdio.h>

void soma (int a, int b, int *c)
{
    *c = a + b;
}

int main()
{
    int a = 4, b = 5, c = 7;
    
    soma (a, b, &c);
    
    printf ("%d", c);

    return 0;
}
