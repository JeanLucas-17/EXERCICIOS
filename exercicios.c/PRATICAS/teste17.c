/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 12/05/2026
    OBJETIVO: INVERTER A ORDEM DO VETOR
*/

#include <stdio.h>

int main()
{
    int i;
    int cont;
    int vetor[8];
    int aux;

    for (i = 0; i < 8; i++)
    {
        printf("Digite o valor do vetor na posicao[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("O vetor na ordem normal: ");

    for (i = 0; i < 8; i++)
    {
        printf("%d ", vetor[i]);
    }

    cont = 7;
    for (i = 0; i < 4; i++)
    {
        aux = vetor[i];
        vetor[i] = vetor[cont];
        vetor[cont] = aux;
        cont--;
    }

    printf("\nO vetor na ordem inversa e: ");

    for (i = 0; i < 8; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}