/******************************************************************************

Exemplo de ponteiro

Autor: Richard
Data: 25/05/2022

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor = 8;
    
    int *pont = &valor;
    
    printf ("O valor de x é: %d\n", valor);
    printf ("O endereço de x é: %p\n", &valor); // pode usar %p para formato hexadecimal
    printf ("O valor de pont é: %p\n", pont);
    printf ("O endereço de pont é: %p\n", &pont);
    printf ("O valor de x acessado por pont é: %d\n", *pont);

    return 0;
}
