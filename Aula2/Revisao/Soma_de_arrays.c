/******************************************************************************

Objetivo: somar os elementos de dois arrays

Autor: Richard Luigi Mantoan Stopa
Data: 16/02/2022

*******************************************************************************/
#include <stdio.h>
#define tamanho 9

int main()
{
    int v[tamanho] = {0,5,1,4,2,7,8,3,6};
    int x[tamanho] = {0,50,10,40,20,70,80,30,60};
    int soma[tamanho];
    int i;
    
    for (i = 0; i < tamanho; i++)
    {
        soma[i] = v[i] + x[i];
        printf ("%d ", soma[i]);
    }

    return 0;
}
