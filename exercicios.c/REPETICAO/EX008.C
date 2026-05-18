/*
    NOME....: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 18/04/2026
    OBJETIVO: MOSTRAR O MAIOR SALARIO JUNTO COM O CARGO QUE POSSUI O MAIOR SALARIO
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int     i;

    char    cargo[10][50];
    char    cargo_maior_salario[50];

    float   salario[10];
    float   maior_salario;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o seu cargo: ");
        scanf(" %[^\n]", &cargo[i]);

        printf("Digite o seu salario: R$ ");
        scanf("%f", &salario[i]);

        if (i == 0)
        {
            maior_salario = salario[i];
            strcpy(cargo_maior_salario, cargo[i]);
        }

        else if (salario[i] > maior_salario)
        {
            maior_salario = salario[i];
            strcpy(cargo_maior_salario, cargo[i]);
        }
    }

    printf("O cargo com o maior salario e %s, com o salario de R$ %.2f", cargo_maior_salario, maior_salario);

    return 0;
}
