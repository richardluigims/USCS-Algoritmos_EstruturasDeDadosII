/******************************************************************************

Objetivo: passagem de valores (parametros) para um função

Autor: Richard Mantoan
Data: 23/02/2022

*******************************************************************************/
#include <stdio.h>

int soma();

int main()
{
    int aux;
    
    aux = soma (10, 20);
    printf("A soma = %d", aux);
    
    aux = soma (10, 30);
    printf("\nA soma = %d", aux);
    
    aux = soma (1, 2);
    printf("\nA soma = %d", aux);
    
    aux = soma (1000, 2000);
    printf("\nA soma = %d", aux);
    
    return 0;
}

int soma(int a, int b)
{
    return a + b;
}
