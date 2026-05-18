/*
AUTOR...: JEAN LUCAS THOMAZELLI SILVA
DATA....: 03/04/2026
OBJETIVO: SIMULADOR CAIXA ELETRONICO
*/

#include <stdio.h>

int main()
{
    int     nota100;
    int     nota50;
    int     nota20;
    int     nota10;
    int     nota5;
    int     nota2;
    int     nota1;
    int     resto;
    int     saque;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &saque);

    nota100 = saque / 100;
    resto = saque % 100;
    nota50 = resto / 50;
    resto = resto % 50;
    nota20 = resto / 20;
    resto = resto % 20;
    nota10 = resto / 10;
    resto = resto % 10;
    nota5 = resto / 5;
    resto = resto % 5;
    nota2 = resto / 2;
    resto = resto % 2;
    nota1 = resto / 1;

    if (nota100 > 0)
    {
        printf("%d cedulas de R$ 100 \n", nota100);
    }
    if (nota50 > 0)
    {
        printf("%d cedulas de R$ 50  \n", nota50);
    }
    if (nota20 > 0)
    {
        printf("%d cedulas de R$ 20  \n", nota20);
    }
    if (nota10 > 0)
    {
        printf("%d cedulas de R$ 10  \n", nota10);
    }
    if (nota5 > 0)
    {
        printf("%d cedulas de R$ 5   \n", nota5);
    }
    if (nota2 > 0)
    {
        printf("%d cedulas de R$ 2   \n", nota2);
    }
    if (nota1 > 0)
    {
        printf("%d cedulas de R$ 1   \n", nota1);
    }

    return 0;
}
