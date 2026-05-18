/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 06/05/2026
    OBJETIVO: MONTAR UM MATRIZ E MOSTRAR A SOMA DAS LINHAS, A SOMA DAS COLUNAS E A SOMA TOTAL!
*/

#include <stdio.h>

int main()
{
    int matriz[4][4];
    int soma_linha;
    int soma_coluna;
    int soma_total = 0;
    int i;
    int x;

    for (i = 0; i < 4; i++)
    {
        for (x = 0; x < 4; x++)
        {
            printf("Digite o valor de [%d][%d]: ", i, x);
            scanf("%d", &matriz[i][x]);
            soma_total += matriz[i][x];
        }
    }

    printf("Elementos da MATRIZ:\n");
    for (i = 0; i < 4; i++)
    {
        soma_linha = 0;
        printf("------------\n");
        for (x = 0; x < 4; x++)
        {
            printf("|%d|", matriz[i][x]);
            soma_linha += matriz[i][x];
        }
        printf("= %d", soma_linha);
        printf("\n");
    }
    printf("------------\n");

    for (i = 0; i < 4; i++)
    {
        soma_coluna = 0;
        for (x = 0; x < 4; x++)
        {
            soma_coluna += matriz[x][i];
        }

        printf("A soma da coluna %d e %d!\n", i, soma_coluna);
    }

    printf("A soma dos valores da matriz e %d!\n", soma_total);

    return 0;
}
