/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 12/05/2026
    OBJETIVO:
*/

#include <stdio.h>

int main()
{
    int i;
    int numeros[10];
    int total_valores;
    int valores_maiores;
    float media;

    total_valores = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor %d: ", i);
        scanf("%d", &numeros[i]);

        total_valores += numeros[i];
    }

    media = 0;

    media = (float)total_valores / 10;

    printf("A media e %.2f!", media);
    printf("\nA soma de todos os valores e: %d!", total_valores);
    printf("\nOs valores maiores que a media sao: ");

    valores_maiores = 0;
    for (i = 0; i < 10; i++)
    {
        if (numeros[i] > media)
        {
            printf("%d ", numeros[i]);
            valores_maiores += numeros[i];
        }
    }

    printf("\nA soma dos valores maiores que a media e: %d!", valores_maiores);

    return 0;
}
