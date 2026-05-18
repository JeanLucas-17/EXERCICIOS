/*
    AUTOR...: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 05/05/2026
    OBJETIVO: VERIFICAR SE A SOMA E IGUAL A OUTRA E MOSTRAR QUANTAS VEZES ACONTECE A SEQUENCIA
*/

#include <stdio.h>

int main()
{
    int M;
    int X;
    int Y;
    int cont = 0;
    int i;
    int V[100];
    int soma_par = 0;
    int soma_impar = 0;

    printf("Digite o valor de M: ");
    scanf("%d", &M);

    for (i = 0; i < M; i++)
    {
        printf("Digite o valor de V[%d]: ", i);
        scanf("%d", &V[i]);
    }

    for (i = 0; i < M; i++)
    {
        if (V[i] % 2 == 0)
        {
            soma_par += V[i];
        }
        else
        {
            soma_impar += V[i];
        }
    }

    printf("Soma dos numeros impares: %d\n\n", soma_impar);
    printf("Soma dos numeros pares..: %d\n\n", soma_par);

    if (soma_impar == soma_par)
    {
        printf("A soma dos numeros impares e igual a soma dos numeros pares!\n");
    }
    else
    {
        printf("A soma dos numeros impares nao e igual a soma dos numeros pares!\n");
    }

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    printf("Digite o valor de Y: ");
    scanf("%d", &Y);

    for (i = 0; i < M - 1; i++)
    {
        if (V[i] == X && V[i + 1] == Y)
        {
            cont++;
        }
    }

    if (cont > 0)
    {
        printf("A sequencia de X e Y apareceu %d vezes no vetor V!", cont);
    }

    else
    {
        printf("A sequencia de X e Y nao apareceu no vetor V!");
    }

    return 0;
}
