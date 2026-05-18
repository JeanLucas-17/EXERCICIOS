/*
AUTOR...: JEAN LUCAS THOMAZELLI SILVA
DATA....: 03/04/2026
OBJETIVO: CALCULAR O SALARIO FINAL
*/

#include <stdio.h>

int main()
{
    float   salario_fixo;
    float   salario_final;
    float   gratificacao;
    float   comissao;
    float   valor_total_vendas;
    
    gratificacao = 150;

    printf("Seu salario fixo: R$ ");
    scanf("%f", &salario_fixo);

    printf("Valor total de vendas: ");
    scanf("%f", &valor_total_vendas);

    comissao = valor_total_vendas * 0.05;
    salario_final = salario_fixo + comissao;

    if (valor_total_vendas > 1000)
    {
        salario_final += gratificacao;
    }

    printf("O seu salario final e: R$ %.2f", salario_final);

    return 0;
}
