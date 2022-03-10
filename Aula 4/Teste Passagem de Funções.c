/******************************************************************************

Objetivo: teste de chamada de funções

Autor: Richard Luigi Mantoan Stopa
Data: 09/03/2022

*******************************************************************************/
#include <stdio.h>

int funcao_c (int c);
int funcao_b (int i);
int funcao_a (int n);

int main()
{
    int result;
    result = funcao_a(10);
    printf ("Resultado = %d" , result);
    return 0;
}

int funcao_c (int c)
{
    printf ("Estou na função c");
    return (c/2);
}

int funcao_b (int i)
{
    printf ("Estou na função b");
    int k;
    k = funcao_c (i-3) * 3 ;
    return (k);
}
 
int funcao_a (int n)
{
    printf ("Estou na função a");
    int x;
    x = funcao_b (n-1) + 6;
    return (x);
}
