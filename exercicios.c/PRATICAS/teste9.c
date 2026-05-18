#include <stdio.h>

int main()
{
    int a;
    int b = 10;

    for (a = 0; a <= 10; a++)
    {
        printf("%d - %d\n", b, a);
        b--;
    }

    printf("Fim da instrução!");
    
    return 0;
}
