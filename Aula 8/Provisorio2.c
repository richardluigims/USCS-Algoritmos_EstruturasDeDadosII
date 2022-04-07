/******************************************************************************

Objetivo: exemplo Struct com apelido (typedef)

Autor: Richard
Data: 06/04/2022

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#define QTDEPESSOAS 3 // para usar 3 pessoas sempre, é uma constante

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
    int i;
    
    PESSOA Fila [QTDEPESSOAS];
    
    for (i = 0; i < QTDEPESSOAS; i++)
    {
        printf ("Digite o seu nome usuário[%d]: ", i); scanf ("%s", Fila[i].nome);
        printf ("Digite a sua idade usuário[%d]: ", i); scanf ("%d", &Fila[i].idade);
        printf ("Digite o seu salário usuário[%d]: ", i); scanf ("%f", &Fila[i].salario);
        printf("\n");
        
    }
    
    printf("-----------------------------------------------------------------------------------\n\n");
    
    for (i = 0; i < QTDEPESSOAS; i++)
    {
        imprimir (Fila[i]); printf("\n\n");
    }
    
    printf("-----------------------------------------------------------------------------------");
    
    return 0;
}

/*

sem typedef

    int main()
    {
        struct Pessoa p = {"Paulo", 35, 2000};
    }

*/
