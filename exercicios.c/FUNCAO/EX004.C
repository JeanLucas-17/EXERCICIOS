/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 16/05/2026
    OBJETIVO: usar funções para resolver decisões lógicas e retornar resultados simples para a main. 
*/

#include <stdio.h>

void ehPar(int num)
{
    if (num % 2 == 0)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    ehPar(num);

    return 0;
}