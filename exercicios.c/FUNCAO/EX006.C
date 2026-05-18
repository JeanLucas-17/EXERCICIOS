/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 16/05/2026
    OBJETIVO: aplicar funções no processamento de vetores e reforçar o cálculo de médias em uma estrutura com vários dados.
*/

#include <stdio.h>

void mediaValor(float numeros[100], int N, int cont)
{
    int i;
    float soma;
    float media;

    media = 0;
    soma = 0;

    for (i = 0; i < N; i++)
    {
        soma += numeros[i];
    }

    media = (float)soma / N;

    if (cont > 0)
    {
        printf("A media dos valores e de %.1f!", media);
    }
    else
    {
        printf("Nao foi digitado nenhum valor!");
    }
}

int main()
{
    float numeros[100];
    int i;
    int N;
    int cont;

    cont = 0;
    printf("Digite a quantidade de elemenotos: ");
    scanf("%d", &N);

    if (N > 0)
    {
        cont++;
    }

    for (i = 0; i < N; i++)
    {
        printf("Digite o valor %d: ", i);
        scanf("%f", &numeros[i]);
    }

    mediaValor(numeros, N, cont);

    return 0;
}
