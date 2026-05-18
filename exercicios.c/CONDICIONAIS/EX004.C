/*
AUTOR...: JEAN LUCAS THOMAZELLI SILVA
DATA....: 03/04/2026
OBJETIVO: CALCULO DO INSS
*/

#include <stdio.h>

int main()
{
    float   salario;
    float   salario_final;
    float   desconto;

    printf("Digite o seu salario: R$ ");
    scanf("%f", &salario);

    if (salario <= 1570)
    {
        desconto = salario * 0.08;
    }
    else
    {
        desconto = salario * 0.09;
    }

    salario_final = salario - desconto;

    printf("O desconto e de %.2f, e o salario final e R$ %.2f!", desconto, salario_final);

    return 0;
}
