/******************************************************************************

Objetivo: imprimir apenas os números pares do array

Autor: Richard Luigi Mantoan Stopa
Data: 16/02/2022

*******************************************************************************/
#include <stdio.h>
#define tamanho 9

int main()
{
    int v[tamanho] = {0,5,1,4,2,7,8,3,6};
    int i;
    
    // se quiser os ímpares, i = 1;
    
    for (i = 0; i < tamanho; i = i + 2)
    {
        printf ("%d ", v[i]);
    }

    return 0;
}
