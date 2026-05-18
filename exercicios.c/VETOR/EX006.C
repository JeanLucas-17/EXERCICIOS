/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 05/05/2026
    OBJETIVO: MOSTRAR SE O VETOR K ESTA NO VETOR A
*/

#include <stdio.h>

int main()
{
    int N;
    int A[100];
    int K;
    int i;
    int cont;

    printf("Digite o valor de K: ");
    scanf("%d", &K);

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    cont = 0;
    for (i = 0; i < N; i++)
    {
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &A[i]);

        if (A[i] == K)
        {
            cont++;
        }
    }

    if (cont > 0)
    {
        printf("O K = %d esta no vetor na posicao: ", K);
        for (i = 0; i < N; i++)
        {
            if (A[i] == K)
            {
                printf("%d ", i);
            }
        }
    }

    else
    {
        printf("O K = %d nao esta no vetor A!", K);
    }

    return 0;
}
