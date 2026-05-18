/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 06/05/2026
    OBJETIVO: MOSTRAR NUMEROS POSITIVOS, NEGATIVOS E NULOS
*/

#include <stdio.h>

int main()
{
    int i;
    int V[100];
    int A[100];
    int B[100];
    int N;
    int nulos;
    int cont_posi;
    int cont_negat;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    cont_posi = 0;
    cont_negat = 0;
    nulos = 0;
    for (i = 0; i < N; i++)
    {
        printf("Digite o valor de V[%d]: ", i);
        scanf("%d", &V[i]);

        if (V[i] == 0)
        {
            nulos++;
        }
        else if (V[i] > 0)
        {
            A[cont_posi] = V[i];
            cont_posi++;
        }
        else
        {
            B[cont_negat] = V[i];
            cont_negat++;
        }
    }

    printf("Valores do vetor V: ");

    for (i = 0; i < N; i++)
    {
        printf("%d ", V[i]);
    }   

    if (cont_posi > 0)
    {
        printf("\nValores do vetor A: ");

        for (i = 0; i < cont_posi; i++)
        {
            printf("%d ", A[i]);
        }
    }
    else
    {
        printf("\nTodos os numeros sao negativos!");
    }

    if (cont_negat > 0)
    {
        printf("\nValores do vetor B: ");

        for (i = 0; i < cont_negat; i++)
        {
            printf("%d ", B[i]);
        }
    }

    else
    {
        printf("\nTodos os numeros sao positivios!");
    }

    return 0;
}
