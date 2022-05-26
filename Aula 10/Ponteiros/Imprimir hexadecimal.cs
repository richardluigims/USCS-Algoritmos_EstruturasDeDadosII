/******************************************************************************

Objetivo: Imprimindo hexadecimal

Autor: Richard
Data: 25/05/2022

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x = 8;
    
    int *p = &x;
    
    printf ("Valor de x = %d\n", x);
    printf ("Valor de x acessado pelo ponteiro = %d\n", *p);
    printf ("Valor de p = %p\n", p);

    return 0;
}
