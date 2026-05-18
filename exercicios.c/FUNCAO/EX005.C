/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 16/05/2026
    OBJETIVO: reforçar o uso de parâmetros, retorno e estruturas condicionais dentro de funções.
*/

#include <stdio.h>

void maiorNumero(int num[2])
{
    int maior;

    if (num[0] > num[1])
    {
        maior = num[0];
    }
    else
    {
        maior = num[1];
    }

    printf("O maior numero e o %d!", maior);
}

int main()
{
    int num[2];
    int i;

    for (i = 0; i < 2; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

    maiorNumero(num);

    return 0;
}