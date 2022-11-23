#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 100

int main()
{
    setlocale(LC_ALL, "");

    int i, j;
    char texto[TAM], vogais[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    printf("Digite o texto: ");
    gets(texto);

    for (i = 0; i < strlen(texto); i++)
        for (j = 0; j < strlen(vogais); j++)
            if (texto[i] == vogais[j])
                texto[i] = '?';

    puts(texto);

    return 0;
}
