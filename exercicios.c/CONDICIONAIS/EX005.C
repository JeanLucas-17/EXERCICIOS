/*
AUTOR...: JEAN LUCAS THOMAZELLI SILVA
DATA....: 03/04/2026
OBJETIVO: PAR OU IMPAR
*/

#include <stdio.h>

int main()
{
    int     numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("O numero %d e PAR!", numero);
    }
    else
    {
        printf("O numero %d e IMPAR!", numero);
    }

    return 0;
}
