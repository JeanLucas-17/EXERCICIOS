/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 13/05/2026
    OBJETIVO:
*/

#include <stdio.h>

void determina_conceito(float media)
{

    printf("Sua media e %.2f!\n", media);
    if (media <= 4.9)
    {
        printf("Conceito D");
    }
    else if (media <= 6.9)
    {
        printf("Conceito C");
    }
    else if (media <= 8.9)
    {
        printf("Conceito B");
    }
    else
    {
        printf("Conceito A");
    }
}

int main()
{
    int nota;
    int soma;
    int i;
    float media;

    media = 0;
    soma = 0;

    for (i = 0; i < 4; i++)
    {
        printf("Digite sua %d nota: ", i);
        scanf("%d", &nota);

        soma += nota;
    }

    media = (float)soma / 4;

    determina_conceito(media);

    return 0;
}
