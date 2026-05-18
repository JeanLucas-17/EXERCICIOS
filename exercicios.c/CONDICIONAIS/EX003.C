/*
AUTOR...: JEAN LUCAS THOMAZELLI SILVA
DATA....: 03/04/2026
OBJETIVO: MOSTRAR MAIOR E MENOR NUMERO
*/

#include <stdio.h>

int main ()
{
    int     maior;
    int     menor;
    int     num1;
    int     num2;
    int     num3;
    
    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("Digite mais um numero: ");
    scanf("%d", &num3);

    maior = num1;
    menor = num1;

    if (maior < num2)
    {
        maior = num2;
    }
    if (maior < num3)
    {
        maior = num3;
    }
    if (menor > num2)
    {
        menor = num2;
    }
    if (menor > num3)
    {
        menor = num3;
    }

    printf("O menor numero e %d, e o maior e %d!", menor, maior);

    return 0;
}
