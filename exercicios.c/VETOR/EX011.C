/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 06/05/2026
    OBJETIVO: LER DOIS VETORES E CALCULAR O PRODUTO ESCALAR E MOSTRAR O RESULTADO
*/

#include <stdio.h>

int main()
{
    int X[10];
    int Y[10];
    int i;
    int produto;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor de X[%d]: ", i);
        scanf("%d", &X[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor de Y[%d]: ", i);
        scanf("%d", &Y[i]);
    }

    produto = 0;

    for (i = 0; i < 10; i++)
    {
        produto += X[i] * Y[i];
    }

    printf("O produto escalar e: %d!", produto);

    return 0;
}
