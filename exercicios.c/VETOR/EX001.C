/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 05/05/2026
    OBJETIVO: FAZER A SOMA DE UM VETOR COM 20 ELEMENTOS
    OBS: RODNEY, SO DA PRA ENVIAR 20 ARQUIVOS, ENTAO O EX021 E EX022 NAO CONSEGUI ENVIAR
*/

#include <stdio.h>

void somar(int A[20])
{
    int cont;
    int soma = 0;
    int i;

    cont = 3;
    for (i = 0; i < 2; i++)
    {
        soma += (A[i] - A[cont]);
        cont--;
    }

    printf("A soma e %d!", soma);
}

int main()
{
    int A[4];
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    somar(A);

    return 0;
}
