/*
    AUTOR....: JEAN LUCAS THOMAZELLI SILVA
    DATA.....: 22/04/2026
    OBJETIVO.: MOSTRAR DIVISIVEIS POR 4 EM UM INTERVALO DE 1 A 200
*/

#include <stdio.h>

int main()
{
    int i;

    for (i = 1; i <= 200; i++)
    {
        if (i % 4 == 0)
        {
            printf("O numero %d e divisivel por 4!\n", i);
        }
    }

    return 0;
}
