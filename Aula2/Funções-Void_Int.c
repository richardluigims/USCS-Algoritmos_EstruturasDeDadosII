/******************************************************************************

Objetivo: exemplo da função void

Autor: Richard Luigi Mantoan Stopa
Data: 16/02/2022

*******************************************************************************/
#include <stdio.h>

void imprimeSoma () {
    printf ("Estou na funcao soma");
} // não devolve nada

int soma () {
    int a = 564 + 756;
    return a;
}

int main()
{
    soma ();
    imprimeSoma ();

    return 0;
} // int devolve um inteiro, float devolve decimal
