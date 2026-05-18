/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 05/05/2026
    OBJETIVO: UNIAO E INTERSECAO
*/

#include <stdio.h>

int main()
{
    int A[3];
    int B[5];
    int C[3];
    int D[8];
    int i;
    int j;
    int count;
    int cont;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o valor de A%d: ", i);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor de B%d: ", i);
        scanf("%d", &B[i]);
    }

    cont = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (A[i] == B[j])
            {
                C[cont] = A[i];
                cont++;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        D[i] = A[i];
    }

    count = 3;
    for (i = 0; i < 5; i++)
    {
        D[count] = B[i];
        count++;
    }

    printf("\nValores de A: ");

    for (i = 0; i < 3; i++)
    {
        printf("%d ", A[i]);
    }

    printf("\nValores de B: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", B[i]);
    }

    if (cont > 0)
    {
        printf("\nValores de C: ");

        for (i = 0; i < cont; i++)
        {
            printf("%d ", C[i]);
        }
    }
    else
    {
        printf("\nC nao tem valor!");
    }

    printf("\nValores de D: ");

    for (i = 0; i < 8; i++)
    {
        printf("%d ", D[i]);
    }

    return 0;
}
