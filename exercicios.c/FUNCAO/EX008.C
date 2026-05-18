/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 16/05/2026
    OBJETIVO: raticar o uso de funções com vetores, percorrendo os elementos para encontrar um resultado específico. 
*/

#include <stdio.h>

void maiorVetor(int numeros[100], int N, int cont)
{
    int i;
    int maior;

    for (i = 0; i < N; i++)
    {
        if (i == 0)
        {
            maior = numeros[i];
        }
        else
        {
            if (numeros[i] > maior)
            {
                maior = numeros[i];
            }
        }
    }   

    if (cont > 0)
    {
        printf("O maior numero no vetor e o %d!", maior);
    }
    else
    {
        printf("Nao foi digitado nenhum valor!");
    }
}

int main()
{
    int i;
    int N;
    int numeros[100];
    int cont;

    cont = 0;
    printf("Quantos numeros voce quer digitar: ");
    scanf("%d", &N);

    if (N > 0)
    {
        cont++;
    }

    for (i = 0; i < N; i++)
    {
        printf("Digite o valor de %d: ", i);
        scanf("%d", &numeros[i]);
    }

    maiorVetor(numeros, N, cont);

    return 0;
}