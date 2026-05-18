/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 05/05/2026
    OBJETIVO: SOMA PONDERADA
*/

#include <stdio.h>

int main()
{
    int i;
    int A[10];
    int S;
    int cont;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    S = 0;
    cont = 0;
    for (i = 0; i < 10; i++)
    {
        S += A[i] / (i + 1);

        if (A[i] < i + 1)
        {
            cont++;
        }
    }

    printf("A soma e %d\n", S);
    printf("%d termos tem  numerador menor que o denominador!", cont);

    return 0;
}
