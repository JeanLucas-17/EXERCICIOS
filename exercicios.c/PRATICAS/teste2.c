
/*
    NOME: JEAN LUCAS
    DATA: 25/03/2026
    OBJETIVO: Escrever qual a letra da nota
*/


#include <stdio.h>

int main()
{
    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if (nota >= 90)
    {
        printf("A nota e A!\n");
    }
    else if (nota >= 80)
    {
        printf("A nota e B!\n");
    }
    else if (nota >= 70)
    {
        printf("A nota e C\n");
    }
    else
    {
        printf("A nota e F!\n");
    }

    return 0;
}
