/*
    AUTOR: JEAN LUCAS THOMAZELLI SILVA
    DATA: 16/05/2026
    OBJETIVO: praticar funções com vetores de caracteres e processamento de texto. 
*/

#include <stdio.h>
#include <string.h>

void contarVogais(char texto[100])
{
    int i;
    int tamanho = strlen(texto);
    int cont;

    cont = 0;
    for (i = 0; i < tamanho; i++)
    {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
            texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U')
        {
            cont++;
        }
    }

    printf("O texto tem %d vogais!", cont);
}

int main()
{
    char texto[100];

    printf("Digite uma frase: ");
    scanf("%[^\n]s", &texto);

    contarVogais(texto);

    return 0;
}
