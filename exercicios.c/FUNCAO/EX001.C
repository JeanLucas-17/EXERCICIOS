/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 16/05/2026
    OBJETIVO: entender a estrutura básica de uma função sem parâmetros e sem retorno. 
*/

#include <stdio.h>

void mensagemBoasVindas(char nome[20])
{
    printf("Seja Bem Vindo %s!", nome);
}

int main()
{
    char nome[20];

    printf("Digite o seu nome: ");
    scanf("%[^\n]s", &nome);

    mensagemBoasVindas(nome);

    return 0;
}