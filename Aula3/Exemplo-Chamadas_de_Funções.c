/******************************************************************************

Autor: Richard
Data: 23/02/2022

*******************************************************************************/
#include <stdio.h>

int main3(); // Sinaliza que a função está no código
char main2();

int main()
{
    printf("Hello World");
    int v = main3();
    printf("\nEstou na main e o v=%d", v);
    
    return 0;
}

char main2()
{
    printf("\nHello World 2");
    return 'R';
}

int main3()
{
    printf("\nHello World 3");
    char aux = main2();
    printf("\nMain2 retornou %c", aux);
    return 300;
}
