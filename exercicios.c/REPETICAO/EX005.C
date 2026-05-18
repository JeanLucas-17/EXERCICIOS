/*
    NOME....: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 18/04/2026
    OBJETIVO: POTENCIAS DE 3 DE 0 A 15
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int     i;
    int     elevado;

    for (i = 0; i <= 15; i++)
    {
        elevado = pow(3, i);
        printf("3 elevado a %d = %d\n", i, elevado);
    }
    return 0;
}
