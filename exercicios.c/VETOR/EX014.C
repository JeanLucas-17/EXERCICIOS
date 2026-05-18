/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 07/05/2026
    OBJETIVO: MOSTRAR ORDEM INVERSA DOS NUMEROS
*/

#include <stdio.h>

int main()
{
    int i;
    int numeros[8];

    for (i = 0; i < 8; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("A ordem inversa e: ");

    for (i = 7; i > -1; i--)
    {
        printf("%d ", numeros[i]);
    }

    return 0;
}
