/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 29/04/2026
    OBJETIVO: MOSTRAR MEDIA DA TURMA E QUAIS ALUNOS FORAM APROVADOS E REPROVADOS
*/

#include <stdio.h>

int main()
{
    float media = 0;
    int notas[10];
    int soma = 0;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Digite a nota do %d. aluno: ", i + 1);
        scanf("%d", &notas[i]);

        if (notas[i] >= 0)
        {
            soma += notas[i];
        }

        if (notas[i] >= 6)
        {
            printf("O aluno %d foi aprovado!\n", i + 1);
        }
        else
        {
            printf("O aluno %d foi reprovado!\n", i + 1);
        }
    }

    media = (float)soma / 10;

    printf("A media da turma e %.1f!\n", media);

    return 0;
}
