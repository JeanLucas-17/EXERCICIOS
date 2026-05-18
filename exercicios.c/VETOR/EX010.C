/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 06/05/2026
    OBJETIVO: PEDIR VALORES DE 2 VETORES E CALCULAR O T E MOSTRAR CADA VETOR
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int X[100];
    int Y[100];
    int T;
    int N;
    int i;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Digite o valor de X[%d]: ", i);
        scanf("%d", &X[i]);
    }

    for (i = 0; i < N; i++)
    {
        printf("Digite o valor de Y[%d]: ", i);
        scanf("%d", &Y[i]);
    }

    printf("\nValores do vetor X: ");

    for (i = 0; i < N; i++)
    {
        printf("%d ", X[i]);
    }

    printf("\n\nValores do vetor Y: ");

    for (i = 0; i < N; i++)
    {
        printf("%d ", Y[i]);
    }

    printf("\n\nVetor T com cada valor de i:\n");
    for (i = 0; i < N; i++)
    {
        T = 0;
        T = pow((X[i] + Y[i]), 2);
        printf("T[%d] = (%d + %d)^2 = %d\n", i, X[i], Y[i], T);
    }

    return 0;
}