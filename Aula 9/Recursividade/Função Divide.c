/******************************************************************************

Objetivo: criar função dividir

Autor: Richard
Data: 02/05/2022

*******************************************************************************/
#include <stdio.h>

int Divide(int a, int b)
{
    if (a < b)
    {
        return 0;
    }
    else
    {
        return 1 + Divide (a - b, b);
    }
}

int main()
{
    
    int x = Divide (12, 3);
    
    printf ("%d", x);
    
    return 0;
}
