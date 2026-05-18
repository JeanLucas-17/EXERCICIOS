#include <stdio.h>

int main()
{

    char nome[30];
    float media;
    float nota1;
    float nota2;
    float nota3;

    printf("Digite o seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua nota: ");
    scanf("%f", &nota1);

    printf("Digite sua nota: ");
    scanf("%f", &nota2);

    printf("Digite sua nota: ");
    scanf("%f", &nota3);

    media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

    if (media <= 4)
    {
        printf("%s, sua media e %.1f, conceito D!", nome, media);
    }
    else if (media <= 6)
    {
        printf("%s, sua media e %.1f, conceito C!", nome, media);
    }
    else if (media <= 8)
    {
        printf("%s, sua media e %.1f, conceito B!", nome, media);
    }
    else
    {
        printf("%s, sua media e %.1f, conceito A!", nome, media);
    }

    return 0;
}
