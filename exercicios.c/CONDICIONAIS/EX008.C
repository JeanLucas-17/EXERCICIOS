/*
AUTOR...: JEAN LUCAS THOMAZELLI SILVA
DATA....: 03/04/2026
OBJETIVO: CALCULAR DESCONTO INSS E IR
*/

#include <stdio.h>

int main()
{
    float   salario_bruto;
    float   salario_liquido;
    float   desconto_inss;
    float   desconto_ir;
    

    printf("Salario bruto: R$ ");
    scanf("%f", &salario_bruto);

    if (salario_bruto <= 1570)
    {
        desconto_inss = salario_bruto * 0.08;
    }
    else
    {
        desconto_inss = salario_bruto * 0.09;
    }

    if (salario_bruto <= 2000)
    {
        desconto_ir = 0;
    }
    else if (salario_bruto <= 3000)
    {
        desconto_ir = salario_bruto * 0.075;
    }
    else
    {
        desconto_ir = salario_bruto * 0.15;
    }

    salario_liquido = salario_bruto - (desconto_inss + desconto_ir);
    
    printf("Desconto INSS: R$ %.2f \nDesconto IR: R$ %.2f \nSalario liquido: R$ %.2f", desconto_inss, desconto_ir, salario_liquido);

    return 0;
}
