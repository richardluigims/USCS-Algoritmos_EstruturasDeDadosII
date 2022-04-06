/******************************************************************************

Objetivo: exemplo Struct com apelido (typedef)

Autor: Richard
Data: 06/04/2022

*******************************************************************************/
#include <stdio.h>
#include <string.h> //para usar strcpy

typedef struct Pessoa
{
    char nome[30];
    int idade;
    float salario;
} PESSOA; //apelido

int main()
{
    PESSOA p;
    
    strcpy(p.nome, "Paulo"); // usa para vetor tipo char
    p.idade = 35;
    p.salario = 2000;
    
    // ou PESSOA p = {"Paulo", 35, 2000}
    
    return 0;
}

/*

sem typedef

    int main()
    {
        struct Pessoa p = {"Paulo", 35, 2000};
    }

*/
