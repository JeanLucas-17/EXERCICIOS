#include <stdio.h>

int main()
{
    int c;
    float f;

    for (c = 10; c <= 100; c += 10)
    {
        f = (9 * c + 160) / 5;
        printf("%d C em F e %.1f F\n", c, f);
    }

    return 0;
}
