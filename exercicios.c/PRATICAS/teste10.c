/*
    Autor: Jean Lucas Thomazelli Silva
    Data: 29/04/2026
    Objetivo: maxmizar lacos for
*/

#include <stdio.h>

int main()
{
    int soma = 0;
    int i;

    for (i = 1; i <= 500; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }
    }

    printf("A soma dos numeros e: %d", soma);
}
