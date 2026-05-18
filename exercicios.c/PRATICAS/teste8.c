#include <stdio.h>

int main()
{
    int num;
    int soma = 0;
    int total_numeros = 0;
    float media_num = 0;

    do
    {
        printf("Digite um numero (-1 finaliza o programa): ");
        scanf("%d", &num);

        if (num >= 0)
        {
            soma += num;
            total_numeros++;
        }

    } while (num >= 0);

    if (total_numeros > 0)
    {
        media_num = soma / total_numeros;

        printf("A soma de todos os numeros e de %d!\n", soma);
        printf("A media de valores lidos e %.1f!\n", media_num);
        printf("Foram digitados %d numeros!\n", total_numeros);
    }

    else
    {
        printf("Nenhum dado valido informado!");
    }

    return 0;
}
