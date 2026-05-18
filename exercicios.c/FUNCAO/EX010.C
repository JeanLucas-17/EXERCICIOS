/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 16/05/2026
    OBJETIVO: compreender como funções podem ser usadas com matrizes para organizar melhor o processamento de dados. 
*/

#include <stdio.h>

void somarMatriz(int matriz[3][3])
{
    int soma;
    int j;
    int i;

    soma = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            soma += matriz[i][j];
        }
    }

    printf("A soma dos elementos da matiz e %d!", soma);
}

int main()
{
    int matriz[3][3];
    int i;
    int j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor da matriz na posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    somarMatriz(matriz);

    return 0;
}
