/*

1. Calcular a quantidade de dias de uma idade.

Autor: Richard
Data: 09/02/2022

*/

#include <stdio.h>

int main()
{
    int anos, dias;
    
    printf ("Qual a sua idade? ");
    scanf ("%d", &anos);
    
    while (anos < 0) {
        printf ("Idade não pode ser negativa! Digite novamente: ");
        scanf ("%d", &anos);
    }
    
    dias = anos*365;
    
    printf ("\nVocê já viveu %d dias.", dias);
    
    return 0;
}
