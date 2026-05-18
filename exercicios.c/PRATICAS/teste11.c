/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 29/04/2026
    OBJETIVO: PEDIR 10 IDADES USANDO FOR E ARMAZENAR EM UMA VARIAVEL ARRAY
*/

#include <stdio.h>

int main()
{
    int idades[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite a %d. idade: ", i + 1);
        scanf("%d", &idades[i]);
    }

    printf("As idades sao:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", idades[i]);
    }

    return 0;
}
