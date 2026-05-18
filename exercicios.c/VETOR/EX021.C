/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 09/05/2026
    OBJETIVO: CONTAR QUANTAS VEZES CADA NUMERO APARECE
*/

#include <stdio.h>

int main()
{
    int numeros[10];
    int rep;
    int cont;
    int i;
    int j;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 10; i++)
    {
        rep = 0;

        for (j = 0; j < i; j++)
        {
            if (numeros[i] == numeros[j])
            {
                rep = 1;
            }
        }

        if (rep == 0)
        {
            cont = 0;
            for (j = 0; j < 10; j++)
            {
                if (numeros[i] == numeros[j])
                {
                    cont++;
                }
            }
            printf("O numero %d apareceu %d vezes!\n", numeros[i], cont);
        }
    }

    return 0;
}
