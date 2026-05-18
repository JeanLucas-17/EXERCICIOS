/*
AUTOR...: JEAN LUCAS THOMAZELLI SILVA
DATA....: 03/04/2026
OBJETIVO: IDENTIFICAR NUMERO PRIMO
*/

#include <stdio.h>

int main()
{
    int     numeros_impares;
    int     num;
    int     i;

    numeros_impares = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        printf("O numero %d nao e primo!", num);
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                numeros_impares += 1;
            }
        }
        if (numeros_impares > 0)
        {
            printf("O numero %d nao e PRIMO!", num);
        }
        else
        {
            printf("O numero %d e PRIMO!", num);
        }
    }

    return 0;
}
