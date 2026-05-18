/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 05/05/2026
    OBJETIVO:
*/

#include <stdio.h>

int main()
{
    int A[3];
    int B[5];
    int D[8];
    int cont = 3;
    int i;

    printf("Valores do vetor A!\n");
    for (i = 0; i < 3; i++)
    {
        printf("Digite o valor de A%d: ", i + 1);
        scanf("%d", &A[i]);

        D[i] = A[i];
    }

    printf("\nValores do vetor B!\n");
    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor de B%d: ", i + 1);
        scanf("%d", &B[i]);

        D[cont] = B[i];
        cont++;
    }

    printf("\nValores do vetor A!\n");
    for (i = 0; i < 3; i++)
    {
        printf("A[%d] = %d\n", i, A[i]);
    }

    printf("\nValores do vetor B!\n");
    for (i = 0; i < 5; i++)
    {
        printf("B[%d] = %d\n", i, B[i]);
    }

    printf("\nValores do vetor D!\n");
    for (i = 0; i < 8; i++)
    {
        printf("D[%d] = %d\n", i, D[i]);
    }

    return 0;
}
