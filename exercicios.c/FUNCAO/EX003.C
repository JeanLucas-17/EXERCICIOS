/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 16/05/2026
    OBJETIVO: praticar funções com parâmetros do tipo real e retorno numérico. 
*/

#include <stdio.h>

void calcularMedia(float notas[3])
{
    float media;
    float soma;
    int i;

    soma = 0;
    media = 0;

    for (i = 0; i < 3; i++)
    {
        soma += notas[i];
    }

    media = (float)soma / 3;

    printf("A media e %.1f!", media);
}

int main()
{
    int i;
    float notas[3];

    for (i = 0; i < 3; i++)
    {
        printf("Digite a %d nota: ", i + 1);
        scanf("%f", &notas[i]);
    }

    calcularMedia(notas);

    return 0;
}