/*
    NOME....: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 18/04/2026
    OBJETIVO: MOSTRAR OS NUMEROS IMPARES DE 0 A 20
*/

#include <stdio.h>

int main()
{
    int     i;

    for (i = 0; i <= 20; i++)
    {
        if (i % 2 != 0)
        {
            printf("O numero %d e IMPAR!\n", i);
        }
    }
    return 0;
}
