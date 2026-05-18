/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 09/05/2026
    OBJETIVO: TROCAR OS VALORES DOS VETORES
*/

#include <stdio.h>

int main()
{
    int A[5];
    int B[5];
    int C[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &A[i]);
        C[i] = A[i];
    }

    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor de B[%d]: ", i);
        scanf("%d", &B[i]);
        A[i] = B[i];
    }

    for (i = 0; i < 5; i++)
    {
        B[i] = C[i];
    }

    printf("Os valore de A sao: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nOs valores de B sao: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", B[i]);
    }

    return 0;
}
