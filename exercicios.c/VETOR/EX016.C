/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 07/05/2026
    OBJETIVO: ENCONTRAR UM NUMERO NO VETOR
*/

#include <stdio.h>

int main()
{
    int i;
    int num;
    int numeros[6];
    int tot = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("Digite mais um numero: ");
    scanf("%d", &num);

    for (i = 0; i < 6; i++)
    {
        if (numeros[i] == num)
        {
            printf("O numero %d aparece no vetor! Na posicao: %d", num, i);
            tot++;
        }
    }

    if (tot == 0)
    {
        printf("O numero %d nao aparece no vetor!", num);
    }

    return 0;
}
