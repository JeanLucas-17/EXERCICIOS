/*
AUTOR...: JEAN LUCAS THOMAZELLI SILVA
DATA....: 03/04/2026
OBJETIVO: SOMA ENTRE DOIS NUMEROS
*/

#include <stdio.h>

int main ()
{
    int     num1;
    int     num2;
    int     soma;
    int     subtracao1;
    int     subtracao2;

    printf("Digite um numero: "); 
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    if (num1 < num2) 
    {
        subtracao1 = num2 - num1;
        printf("A subtracao entre os numeros %d e %d = %d!", num2, num1, subtracao1);
    }
    else if (num2 < num1)
    {
        subtracao2 = num1 - num2;
        printf("A subtracao entre os numeros %d e %d = %d!", num1, num2, subtracao2);
    }
    else
    {
        soma = num1 + num2;
        printf("A soma entre %d e %d = %d!", num1, num2, soma);
    }

    return 0;
}
