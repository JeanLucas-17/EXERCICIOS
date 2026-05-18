/*
    NOME....: JEAN LUCAS THOMAZELLI SILVA
    DATA....: 18/04/2026
    OBJETIVO: CONTAGEM DE VOTOS
*/

#include <stdio.h>
#include <unistd.h>

int main()
{
    int     voto;
    int     total_votos = 0;
    int     votos_cand_1 = 0;
    int     votos_cand_2 = 0;
    int     votos_cand_3 = 0;
    int     votos_cand_4 = 0;
    int     votos_em_branco = 0;
    int     votos_nulos = 0;

    do
    {
        printf("URNA ELEITORAL\n");
        printf(" [1] Candidato 1\n [2] Candidato 2\n [3] Candidato 3\n [4] Candidato 4\n [5] Voto em branco \n [6] Voto nulo\n");
        printf("Seu voto: ");
        scanf("%d", &voto);

        while ((voto > 6) || (voto < 0))
        {
            printf("Apeans votos de 1 a 6 para sua escolha! E 0 para finalizar: ");
            scanf("%d", &voto);
        }

        if ((voto > 0) && (voto < 6))
        {
            total_votos++;
        }

        if (voto == 1)
        {
            votos_cand_1++;
        }

        else if (voto == 2)
        {
            votos_cand_2++;
        }

        else if (voto == 3)
        {
            votos_cand_3++;
        }

        else if (voto == 4)
        {
            votos_cand_4++;
        }

        else if (voto == 5)
        {
            votos_em_branco++;
        }

        else if (voto == 6)
        {
            votos_nulos++;
        }

        printf("Processando...\n");
        sleep(1);

    } while (voto != 0);

    if (total_votos > 0)
    {
        printf("VOTOS DOS CANDIDATOS\n");
        printf("Candidato 1....: %d\n", votos_cand_1);
        printf("Candidato 2....: %d\n", votos_cand_2);
        printf("Candidato 3....: %d\n", votos_cand_3);
        printf("Candidato 4....: %d\n", votos_cand_4);
        printf("Votos em branco: %d\n", votos_em_branco);
        printf("Votos nulos....: %d\n", votos_nulos);
        printf("Total de votos.: %d\n", total_votos);
    }

    else
    {
        printf("Nenhum voto realizado!");
    }

    return 0;
}
