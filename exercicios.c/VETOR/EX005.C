/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 05/05/2026
    OBJETIVO: INVERTER O VETOR A
*/

#include <stdio.h>

int main()
{
    int A[200];
    int aux;
    int i;

    for (i = 0; i < 200; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &A[i]);
    }

    for (i = 0; i < 100; i++)
    {
        aux = A[i];
        A[i] = A[199 - i];
        A[199 - i] = aux;
    }

    printf("Vetor invertido: ");

    for (i = 0; i < 200; i++)
    {
        printf("%d ", A[i]);
    }

    return 0;
}
