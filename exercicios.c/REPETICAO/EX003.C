/*
    NOME....: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 18/04/2026
    OBJETIVO: MOSTRA A SOMA DE TODOS NUMEROS PARES DE 1 A 500
*/

#include <stdio.h>

int main()
{
    int     soma = 0;
    int     i;

    for (i = 1; i <= 500; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }
    }

    printf("A soma dos numeros pares de 1 a 500 e %d", soma);

    return 0;
}
