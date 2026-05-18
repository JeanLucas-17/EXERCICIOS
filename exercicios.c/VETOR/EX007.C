/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 05/05/2026
    OBJETIVO: MAIOR DIFERENCA
*/

#include <stdio.h>

int main()
{
    int A[100];
    int N;
    int maior_dif;
    int diferenca;
    int i;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < N - 1; i++)
    {
        if (i == 0)
        {
            diferenca = A[i + 1] - A[i];

            if (diferenca < 0)
            {
                diferenca *= -1;
            }

            maior_dif = diferenca;
        }

        else
        {
            diferenca = A[i + 1] - A[i];

            if (diferenca < 0)
            {
                diferenca *= -1;
            }

            if (diferenca > maior_dif)
            {
                maior_dif = diferenca;
            }
        }
    }

    printf("A maior diferenca e %d!", maior_dif);

    return 0;
}
