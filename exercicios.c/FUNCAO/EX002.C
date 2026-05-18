/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 16/05/2026
    OBJETIVO: compreender como uma função pode receber dados e devolver um resultado ao programa principal.
*/

#include <stdio.h>

void somar(int num[2])
{
    int soma;
    int i;

    soma = 0;

    for (i = 0; i < 2; i++)
    {
        soma += num[i];
    }

    printf("A soma dos numeros e %d!", soma);
}

int main()
{
    int num[2];
    int i;

    for (i = 0; i < 2; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

    somar(num);

    return 0;
}