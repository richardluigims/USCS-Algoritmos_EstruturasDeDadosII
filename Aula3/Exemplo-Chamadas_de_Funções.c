/******************************************************************************

Autor: Richard
Data: 23/02/2022

*******************************************************************************/
#include <stdio.h>

int main2()
{
    printf("\nHello World 2");
    return 0;
}

int main3()
{
    printf("\nHello World 3");
    main2();
    return 0;
}

int main()
{
    printf("Hello World");
    main3();
    return 0;
}
