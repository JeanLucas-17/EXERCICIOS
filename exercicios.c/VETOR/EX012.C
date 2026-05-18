/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 06/05/2026
    OBJETIVO: LER UM VETOR COM N ELEMENTOS E MOSTRALO NA ORDEM CRESCENTE
*/

#include <stdio.h>

int main()
{
    int N;
    int A[100];
    int j;
    int i;
    int aux;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Vetor original: ");

    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (A[j] > A[i])
            {
                aux = A[j];
                A[j] = A[i];
                A[i] = aux;
            }
        }
    }

    printf("\n\nVetor na ordem crescente: ");

    for (i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
