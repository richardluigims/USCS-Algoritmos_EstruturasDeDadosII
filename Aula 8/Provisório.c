/******************************************************************************

Objetivo: exemplo Struct com apelido (typedef)

Autor: Richard
Data: 06/04/2022

*******************************************************************************/
#include <stdio.h>
#include <string.h>

typedef struct Pessoa
{
    char nome[30];
    int idade;
    float salario;
} PESSOA; //apelido

void imprimir (PESSOA p)
{
    printf ("Nome: %s. Idade: %d. Salário: %.2f", p.nome, p.idade, p.salario);
}

int main()
{
    PESSOA p;
    
    strcpy(p.nome, "Paulo"); // usa para vetor tipo char
    p.idade = 35;
    p.salario = 2000;
    
   //PESSOA p = {"Paulo", 35, 2000};
    
    imprimir(p);
    
    return 0;
}

/*

sem typedef

    int main()
    {
        struct Pessoa p = {"Paulo", 35, 2000};
    }

*/
