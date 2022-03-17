/******************************************************************************

Objetivo: Exemplo de Passagem por Referência

Autor: Richard
Data: 16/03/2022

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int valor (int * a, int * b)
{
    *a = *a = 1;
    *b = *b + 2;
    
    printf ("Valores das variáveis dentro da função: \n");
    printf ("Valor 1 = %d\n", *a);
    printf ("Valor 2 = %d\n", *b);
}

int main()
{
    int n1 = 1, n2 = 2, total;
    
    printf ("Valores iniciais de n1 e n2: %d e %d\n", n1, n2);
    printf ("Chamando a função ... \n");
    valor (&n1, &n2);
    printf ("Valores depois de chamada a função: %d e %d\n", n1, n2);

    return 0;
}
