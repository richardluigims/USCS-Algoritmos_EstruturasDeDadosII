/******************************************************************************

Objetivo: Teste de variáveis locais e passagem de parâmetros.

Autor: Richard Luigi Mantoan Stopa
Data: 09/03/2022

*******************************************************************************/
#include <stdio.h>

void muda (int n);
void muda2 ();

int main()
{
    int n = 5;
    
    printf ("n = %d antes da chamada de muda\n", n);
    muda (n);
    printf ("n = %d depois da chamada de muda\n", n);
    n = 5;
    printf ("n = %d antes da chamada de muda2\n", n);
    muda2 ();
    printf ("n = %d depois da chamada de muda2\n", n);

    return 0;
}

void muda (int n)
{
    n = 10;
    printf ("n = %d dentro da chamada de muda\n", n);
}

void muda2 ()
{
    int n = 10;
    printf ("n = %d dentro da chamada de muda2\n", n);
}
