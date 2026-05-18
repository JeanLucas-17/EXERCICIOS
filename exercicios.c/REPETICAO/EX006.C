/*
    NOME....: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 18/04/2026
    OBJETIVO: PEDIR QUANTOS NUMEROS O USUARIO QUER DIGITAR E MOSTRAR A SOMA DOS NUMEROS
*/

#include <stdio.h>

int main()
{
    int     numeros;
    int     soma = 0;
    int     num;
    int     i;

    printf("Digite a quantidade de numeros que voce quer somar: ");
    scanf("%d", &numeros);

    while (numeros < 2)
    {
        printf("Para realizar uma soma precisa de no minimo dois numeros!");
        printf("Quantos numeros voce quer somar? ");
        scanf("%d", &numeros);
    }

    for (i = 1; i <= numeros; i++)
    {
        printf("Digite o numero: ");
        scanf("%d", &num);

        soma += num;
    }

    printf("A soma total e de %d", soma);

    return 0;
}
