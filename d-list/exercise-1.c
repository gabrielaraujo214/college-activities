#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 10

int main()
{
    setlocale(LC_ALL, "");

    int i;
    char texto[TAM];

    scanf("%s", texto);

    for (i = strlen(texto) - 1; i >= 0; i--)
        printf("%c", texto[i]);

    return 0;
}