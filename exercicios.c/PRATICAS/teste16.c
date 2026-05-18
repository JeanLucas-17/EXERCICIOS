/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 12/05/2026
    OBJETIVO: PEDIR VALORES DE UM MATRIZ E CRIAR UMA MATRIZ TRANSPOSTA
*/

#include <stdio.h>

int main()
{
    int i;
    int j;
    int matriz_normal[2][3];
    int matriz_transposta[3][2];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor da matriz na posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz_normal[i][j]);

            matriz_transposta[j][i] = matriz_normal[i][j];
        }
    }

    printf("Matriz normal:");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matriz_normal[i][j]);
        }
    }

    printf("\n\nMatriz transposta:");
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
        {
            printf("%d ", matriz_transposta[i][j]);
        }
    }

    return 0;
}
