/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 16/05/2026
    OBJETIVO: praticar funções que realizam processamento repetitivo e retornam um valor calculado. 
*/

#include <stdio.h>

void potencia(int base, int exp)
{
    int i;
    int pot;

    pot = 1;
    for (i = 0; i < exp; i++)
    {
        pot *= base;
    }

    printf("%d^%d = %d", base, exp, pot);
}

int main()
{
    int base;
    int exp;

    printf("Digite o valor da base: ");
    scanf("%d", &base);

    printf("Digite o valor do expoente: ");
    scanf("%d", &exp);

    potencia(base, exp);

    return 0;
}
