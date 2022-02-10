/*

1. Calcular a quantidade de dias de uma idade.

Autor: Richard
Data: 09/02/2022

*/

#include <stdio.h>

int main()
{
    // variáveis
    int anos, dias;
    
    // entrada
    printf ("Qual a sua idade? ");
    scanf ("%d", &anos);
    
    // processamento
    dias = anos*365;
    
    // saída
    printf ("Você já viveu %d dias", dias);
    
    return 0;
}
