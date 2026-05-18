/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 05/05/2026
    OBJETIVO:
*/

#include <stdio.h>

int main()
{
    int i;
    int A[6];
    int B[6];
    int Y;

    for (i = 0; i < 6; i++)
    {
        printf("Digite o A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    Y = 5;
    for (i = 0; i < 6; i++)
    {
        B[Y] = A[i];
        Y--;
    }

    printf("A ordem inversa e: ");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", B[i]);
    }

    return 0;
}
