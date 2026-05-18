/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 08/05/2026
    OBJETIVO: MOSTRAR OS NUMEROS MAIORES QUE A MEDIA
*/

#include <stdio.h>

int main()
{
    int i;
    float media = 0;
    float soma = 0;
    float numeros[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &numeros[i]);

        soma += numeros[i];
    }

    media = (float)soma / 5;

    printf("A media e %.1f!\n", media);
    for (i = 0; i < 5; i++)
    {
        if (numeros[i] > media)
        {
            printf("O numero %.1f e maior que a media!\n", numeros[i]);
        }
    }

    return 0;
}
