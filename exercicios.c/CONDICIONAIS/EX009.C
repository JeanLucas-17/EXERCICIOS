/*
AUTOR...: JEAN LUCAS THOMAZELLI SILVA
DATA....: 03/04/2026
OBJETIVO: CALCULAR A AREA DAS FORMAS GEOMETRICAS
*/

#include <stdio.h>

int main()
{
    int     escolha;
    float   area;
    float   lado_quadrado;
    float   base_retangulo;
    float   altura_retangulo;
    float   base_triangulo;
    float   altura_triangulo;

    printf("Menu:\n  [1] Quadrado\n  [2] Retangulo\n  [3] Triangulo\n");

    printf("Sua escolha: ");
    scanf("%d", &escolha);

    if ((escolha < 1) || (escolha > 3))
    {
        printf("Apenas as escolhas de 1 a 3!");
    }
    else
    {
        if (escolha == 1)
        {
            printf("Quanto mede o lado do quadrado: ");
            scanf("%f", &lado_quadrado);

            area = lado_quadrado * lado_quadrado;

            printf("A area do quadrado mede %.1fcm^2!", area);
        }
        else if (escolha == 2)
        {
            printf("Quanto mede a base do retangulo: ");
            scanf("%f", &base_retangulo);

            printf("Quanto mede a altura do retangulo: ");
            scanf("%f", &altura_retangulo);

            area = base_retangulo * altura_retangulo;

            printf("A area do retangulo e %.1fcm^2!", area);
        }
        else
        {
            printf("Quanto mede a base do triangulo: ");
            scanf("%f", &base_triangulo);

            printf("Quanto mede a altura do triangulo: ");
            scanf("%f", &altura_triangulo);

            area = (base_triangulo * altura_triangulo) / 2;

            printf("A area do triangulo e %.1fcm^2!", area);
        }
    }
    return 0;
}
