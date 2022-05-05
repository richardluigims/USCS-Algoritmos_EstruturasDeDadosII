/******************************************************************************

Objetivo: exemplos de recursividade

Autor: Richard
Data: 04/05/2022

*******************************************************************************/
#include <stdio.h>

void misterio (int n);
int fatorial (int n);
void ciclo (int n, int limite);
void magico (int n);

int main()
{
    printf ("Função mistério: ");
    misterio(3);
    
    printf ("\n---------------------\n");
    
    printf ("Função fatorial: ");
    int x = fatorial(5);
    printf ("%d", x);
    
    printf ("\n---------------------\n");
    
    printf ("Função ciclo: ");
    ciclo(1, 10);
    
    printf ("\n---------------------\n");
    
    printf ("Função magico: ");
    magico(3);

    return 0;
}

void misterio (int n)
{
    if (n < 5)
    {
        misterio(n + 1);
        printf ("%d ", n);
        misterio(n + 1);
    }
}

int fatorial (int n)
{
    int fat;
    
    if (n == 0)
    {
        fat = 1;
    }
    else
    {
        fat = n * fatorial(n - 1);
    }
    
    return fat;
}

void ciclo (int n, int limite)
{
    printf ("%d ", n);
    
    if (n < limite)
    {
        ciclo(n + 1, limite);
    }
}

void magico (int n)
{
    printf ("%d ", n);
    
    if (n < 5)
    {
        magico(n + 1);
    }
    
    printf ("%d ", n);
}
