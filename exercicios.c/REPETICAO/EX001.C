/*
    NOME....: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 18/04/2026
    OBJETIVO: MOSTRAR O QUADRADO DOS NUMEROS DE 15 A 200
*/

#include <stdio.h>

int main()
{
    int     i;

    for (i = 15; i <= 200; i++)
    {
        printf("O quadrado de %d e %d\n", i, i * i);
    }

    return 0;
}
