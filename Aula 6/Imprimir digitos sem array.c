/******************************************************************************

Objetivo: Imprimir digitos de um número sem array.

Autor: Richard.
Data: 23/03/2022.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, resto;
    
    while (num < 100000 || num > 999999)
    {
        printf ("Digite um número entre 100000 e 999999: ");
        scanf ("%d", &num);
    }
    
    while (num != 0)
    {
        resto = num%10;
        num = num/10;
        
        printf ("\n %d", resto);
    }
    

    return 0;
}
