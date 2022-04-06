/******************************************************************************

Objetivo: exemplo de struct

Autor: Richard
Data: 30/03/2022

*******************************************************************************/
#include <stdio.h>


struct Aluno
{
    char nome[30];
    float nota;
};

int main()
{
    struct Aluno aluno1, aluno2;
    
    printf ("Digite seu nome: ");
    scanf ("%s", aluno1.nome);
    
    printf ("Digite sua nota: ");
    scanf ("%f", &aluno1.nota);
    
    printf ("Digite seu nome: ");
    scanf ("%s", aluno2.nome);
    
    printf ("Digite sua nota: ");
    scanf ("%f", &aluno2.nota);
    
    printf ("%s conseguiu a nota %.2f.\n", aluno1.nome, aluno1.nota);
    printf ("%s conseguiu a nota %.2f.", aluno2.nome, aluno2.nota);

    return 0;
}
