/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 07/05/2026
    OBJETIVO: LER 5 NUMEROS E MOSTRAR TODOS ELES
*/

#include <stdio.h>

int main()
{
    int i;
    int numeros[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    printf("Os numeros lidos foram: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", numeros[i]);
    }

    return 0;
}
