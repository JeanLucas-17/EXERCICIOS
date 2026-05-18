/*
AUTOR...: JEAN LUCAS THOMAZELLI SILVA
DATA....: 03/04/2026
OBJETIVO: CALCULAR O IMC
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float   peso;
    float   altura;
    float   imc;

    printf("Digite o seu peso [Kg]: ");
    scanf("%f", &peso);

    printf("Digite sua altura [M]: ");
    scanf("%f", &altura);

    imc = peso / (pow(altura, 2));

    if (imc < 18.5)
    {
        printf("Abaixo do peso!");
    }
    else if (imc < 24.9)
    {
        printf("Peso normal!");
    }
    else if (imc < 29.9)
    {
        printf("Sobrepeso!");
    }
    else
    {
        printf("Obesidade!");
    }

    return 0;
}
