/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 13/05/2026
    OBJETIVO: NUMEROS IMPARES
*/

#include <stdio.h>

void unicive()
{
    int i;

    for (i = 0; i < 49; i++)
    {
        printf("-");
    }

    printf("\n");
    for (i = 0; i < 20; i++)
    {
        printf("=");
    }

    printf(" UNICIVE ");

    for (i = 0; i < 20; i++)
    {
        printf("=");
    }

    printf("\n");
    for (i = 0; i < 49; i++)
    {
        printf("-");
    }
}

void ehPrimo(int num)
{
    int i;
    int tot;

    tot = 0;

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            tot++;
        }
    }

    if (tot == 0)
    {
        printf("O numero %d e PRIMO!\n", num);
    }

    else
    {
        printf("O numero %d nao e PRIMO!\n", num);
    }
}

int main()
{
    int num;
    int i;

    unicive();

    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);
        ehPrimo(num);
    }

    unicive();

    return 0;
}
