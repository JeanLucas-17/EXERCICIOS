/*
AUTOR...: JEAN LUCAS THOMAZELLI SILVA
DATA....: 03/04/2026
OBJETIVO: VERIFICAR IDADE PARA TIRAR HABILITACAO
*/

#include <stdio.h>

int main()
{
    int     idade;

    printf("Qual sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Voce pode tirar habilitacao!");
    }
    else
    {
        printf("Voce nao pode tirar habilitacao!");
    }

    return 0;
}
