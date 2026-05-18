/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 09/05/2026
    OBJETIVO: ORDEM CRESCENTE DOS VALORES
*/

#include <stdio.h>

int main()
{
    int vetor[6];
    int i;
    int j;
    int aux;

    for (i = 0; i < 6; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("\nAntes da ordenacao:");

    for (i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }

    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 6; j++)
        {
            if (vetor[i] > vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }

    printf("\n\nA ordem crescente e: ");

    for (i = 0; i < 6; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}
