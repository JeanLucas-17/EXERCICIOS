/*
    NOME....: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 18/04/2026
    OBJETIVO: MOSTAR A ALTURA E NUMERO DO ALUNO MAIS ALTO E DO MAIS BAIXO
*/

#include <stdio.h>

int main()
{
    int     numero;
    int     maior;
    int     menor;
    int     altura;
    int     num_do_maior;
    int     num_do_menor;
    int     i;

    for (i = 1; i <= 5; i++)
    {
        printf("=== %d ALUNO ===\n", i);
        printf("Digite o seu numero: ");
        scanf("%d", &numero);

        printf("Digite sua altura em [CM]: ");
        scanf("%d", &altura);

        if (i == 1)
        {
            maior = altura;
            menor = altura;
            num_do_maior = numero;
            num_do_menor = numero;
        }
        else
        {
            if (altura > maior)
            {
                maior = altura;
                num_do_maior = numero;
            }

            if (altura < menor)
            {
                menor = altura;
                num_do_menor = numero;
            }
        }
        
    }

    printf("ALUNO MAIS ALTO.:\n Numero: %d\n Altura: %d\n", num_do_maior, maior);
    printf("ALUNO MAIS BAIXO:\n Numero: %d\n Altura: %d\n", num_do_menor, menor);

    return 0;
}
