/*
AUTOR...: JEAN LUCAS THOMAZELLI SILVA
DATA....: 03/04/2026
OBJETIVO: EXIBIR NUMEROS EM ORDEM CRESCENTE
*/

#include <stdio.h>

int main()
{
    int     num1;
    int     num2;
    int     num3;
    int     maior;
    int     menor;
    int     meio;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("Digite mais um numero: ");
    scanf("%d", &num3);

    maior = num1;
    menor = num1;

    if (num2 > maior)
    {
        maior = num2;
    }
    if (num3 > maior)
    {
        maior = num3;
    }
    if (num2 < menor)
    {
        menor = num2;
    }
    if (num3 < menor)
    {
        menor = num3;
    }

    meio = num1 + num2 + num3 - maior - menor;

    printf("A ordem crescente e: %d, %d, %d!", menor, meio, maior);

    return 0;
}
