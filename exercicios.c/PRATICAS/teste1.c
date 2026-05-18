/*
    NOME: JEAN LUCAS
    DATA: 25/03/2026
    OBJETIVO: Escrever se numero é maior ou menor ou igual
*/

#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 5)
    {
        printf("O numero %d e maior que 5!", numero);
    }
    else if (numero == 5)
    {
        printf("O numero %d e igual ao 5!", numero);
    }
    else
    {
        printf("O numero %d e menor que 5!", numero);
    }

    return 0;
}
