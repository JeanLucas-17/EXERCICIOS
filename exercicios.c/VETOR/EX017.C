/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 08/05/2026
    OBJETIVO: MOSTRAR NUMEROS PARES
*/

#include <stdio.h>

int main()
{
    int i;
    int numeros[10];
    int tot = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0)
        {
            tot++;
        }
    }

    if (tot > 0)
    {
        printf("Os numeros pares sao: ");
        for (i = 0; i < 10; i++)
        {
            if (numeros[i] % 2 == 0)
            {
                printf("%d ", numeros[i]);
            }
        }
    }
    else
    {
        printf("Nao foi digitado nenhum numero par!");
    }


    return 0;
}
