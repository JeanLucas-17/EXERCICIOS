/*
    NOME....: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 18/04/2026
    OBJETIVO: PEDIR UM NUMERO E MOSTRAR A SUA TABUADA
*/

#include <stdio.h>

int main()
{
    int     num;
    int     i;

    printf("Digite um numero para ver sua trabuada: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
