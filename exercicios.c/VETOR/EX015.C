/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 07/05/2026
    OBJETIVO: SOMANDO VALORES
*/

#include <stdio.h>

int main()
{
    int numeros[10];
    int i;
    int soma = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);

        soma += numeros[i];
    }

    printf("A soma e: %d", soma);

    return 0;
}
