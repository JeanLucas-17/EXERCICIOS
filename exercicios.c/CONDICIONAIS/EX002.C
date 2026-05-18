/*
AUTOR...: JEAN LUCAS THOMAZELLI SILVA
DATA....: 03/04/2026
OBJETIVO: CALCULAR MEDIA DAS NOTAS PARES
*/

#include <stdio.h>

int main ()
{
    int     nota1;
    int     nota2;
    int     nota3;
    int     media;
    int     valor_notas;
    int     total_notas_pares;
    
    valor_notas = 0;
    total_notas_pares = 0;

    printf("Digite sua primeira nota: ");
    scanf("%d", &nota1);

    printf("Digite sua segunda nota: ");
    scanf("%d", &nota2);

    printf("Digite sua terceira nota: ");
    scanf("%d", &nota3);

    if (nota1 % 2 == 0)
    {
        valor_notas += nota1;
        total_notas_pares++;
    }
    if (nota2 % 2 == 0)
    {
        valor_notas += nota2;
        total_notas_pares++;
    }
    if (nota3 % 2 == 0)
    {
        valor_notas += nota3;
        total_notas_pares++;
    }
    if (total_notas_pares > 0)
    {
        media = valor_notas / total_notas_pares;
        printf("A media das notas pares e %d!", media);
    }
    else
    {
        printf("NEHUMA NOTA PAR!");
    }

    return 0;
}
