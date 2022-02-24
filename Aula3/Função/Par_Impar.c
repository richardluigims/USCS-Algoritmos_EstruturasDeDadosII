/******************************************************************************

Objetivo: criar e testar uma função que recebe um número como parâmetro e 
          retorna se ele é par ou ímpar.
          O resultado deve ser apresentado na função main.
          
Autor: Richard Luigi Mantoan Stopa

Data: 23/02/2022

*******************************************************************************/
#include <stdio.h>

int ParImpar();

int main()
{
    int aux = ParImpar (4);
    
    if (aux == 1)
    {
        printf ("O número é par!");
    }
    else
    {
        printf ("O número é ímpar!");
    }

    return 0;
}

int ParImpar(int numero)
{
    int retorno = 0;
    
    if (numero % 2 == 0)
    {
        retorno == 1;
    }
    
    return retorno;
}
