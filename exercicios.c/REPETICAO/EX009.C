/*
    NOME....: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 18/04/2026
    OBJETIVO: MOSTRAR INFORMACOES DA POPULACAO
*/

#include <stdio.h>

int main()
{
    float   salario;
    float   total_salarios = 0;
    float   media_salario = 0;
    float   maior_salario;

    float   salario_ate_100 = 0;
    float   percent_salario_ate_100 = 0;

    int     filhos;
    int     total_filhos = 0;
    float   media_filhos = 0;

    int     total_pessoas = 0;

    do
    {
        printf("Digite o seu salario: R$ ");
        scanf("%f", &salario);

        if (salario >= 0)
        {
            printf("Digite quantos filhos voce tem: ");
            scanf("%d", &filhos);

            if (filhos >= 0)
            {
                total_filhos += filhos;
            }

            if (total_pessoas == 0)
            {
                maior_salario = salario;
            }

            if (salario > maior_salario)
            {
                maior_salario = salario;
            }

            if (salario <= 100) {
                salario_ate_100++;
            }

            total_pessoas++;
            total_salarios += salario;
        }

    } while (salario >= 0);

    if (total_pessoas > 0)
    {
        media_salario = (float)total_salarios / total_pessoas;
        media_filhos = (float)total_filhos / total_pessoas;
        percent_salario_ate_100 = ((float) salario_ate_100 / total_pessoas) * 100;

        printf("A media de salario da populacao e de R$ %.2f!\n", media_salario);
        printf("A media de filhos por habitante e de %.1f filhos!\n", media_filhos);
        printf("O maior salario registrado e R$ %.2f!\n", maior_salario);
        printf("A %% de pessoas com o salario de ate R$ 100 e de %.1f%%!\n", percent_salario_ate_100);
    }
    
    return 0;
}
