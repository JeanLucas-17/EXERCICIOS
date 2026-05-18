/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 05/05/2026
    OBJETIVO: CALCULAR POLINOMIO COM VETORES
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    int a[100];
    int P;
    int j;
    int x;
    int i;

    printf("Digite o grau do polinomio: ");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        P = 0;
        printf("Digite o valor de X: ");
        scanf("%d", &x);

        for (j = 0; j < N; j++)
        {
            P += a[j] * pow(x, j);
        }

        printf("P(%d) = %d\n", x, P);
    }

    return 0;
}
