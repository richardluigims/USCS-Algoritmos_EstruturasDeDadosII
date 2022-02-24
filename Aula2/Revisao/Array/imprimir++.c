/******************************************************************************

Objetivo: imprimir as casas do array de 0 até 8

Autor: Richard Luigi Mantoan Stopa
Data: 16/02/2022

*******************************************************************************/
#include <stdio.h>
#define tamanho 9

int main()
{
    int v[tamanho] = {0,5,1,4,2,7,8,3,6};
    int i;
    
    for (i = 0; i < tamanho; i++)
    {
        printf ("%d\n", v[i]);
    }

    return 0;
}
