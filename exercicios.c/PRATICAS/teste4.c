/*
NOME....: JEAN LUCAS
DATA....: 31/03/2026
OBJETIVO:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int num;
    int segredo;

    // COMANDO QUE SORTEIA UM NUMERO ALEATORIO
    srand(time(NULL));
    segredo = rand() % 10;

    printf("Qual o nuemro: ");
    scanf("%d", &num);

    if (segredo == num)
    {
        printf("Acertou!\n");
    }
    else if (segredo < num)
    {
        printf("Errado, muito alto! O numero secreto e %d\n", segredo);
    }
    else
    {
        printf("Errado, muito baixo! O numero secreto e %d\n", segredo);
    }

    return 0;
}
