/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 13/05/2026
    OBJETIVO: NUMEROS PRIMOS
*/

#include <stdio.h>

void unicive()
{
    int i;

    for (i = 0; i < 49; i++)
    {
        printf("=");
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
        printf("=");
    }
}

void classifica(int num)
{
    if (num % 2 == 0)
    {
        printf("\nO numero %d e PAR!\n", num);
    }
    else
    {
        printf("\nO numero %d e IMPAR!\n", num);
    }
    unicive();
}

int main()
{
    int numero;
    int i;

    printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &numero);
        classifica(numero);
    }

    return 0;
}
