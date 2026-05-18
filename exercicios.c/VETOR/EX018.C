/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 08/05/2026
    OBJETIVO: MAIOR E MANOR VALOR E SUAS POSICOES
*/

#include <stdio.h>

int main()
{
    int i;
    int numeros[7];
    int maior;
    int menor;
    int pos_menor;
    int pos_maior;

    for (i = 0; i < 7; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);

        if (i == 0)
        {
            maior = numeros[i];
            menor = numeros[i];
            pos_maior = i;
            pos_menor = i;
        }
        else if (numeros[i] > maior)
        {
            maior = numeros[i];
            pos_maior = i;
        }
        else if (numeros[i] < menor)
        {
            menor = numeros[i];
            pos_menor = i;
        }
    }

    printf("O maior numero e %d na posicao %d!\n", maior, pos_maior);
    printf("O menor numero e %d na posicao %d!\n", menor, pos_menor);

    return 0;
}
