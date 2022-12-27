// Rewrite the exercise program 1 from D list and transform the part that displays the name inverted into a function. The function must receive the array with the text entered by the user and will display this text inverted, this function has no return.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

#define TAM 10

void invertido(char vetor[])
{
    int i;

    printf("invertido[%i] = {", TAM);

    for (i = TAM - 1; i >= 0; i--)
    {
        if (i != 0)
            printf("%c, ", vetor[i]);
        else
            printf("%c};", vetor[i]);
    }
}

int main()
{
    // setlocale(LC_ALL,"");
    SetConsoleOutputCP(65001);

    char vetor[TAM];
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite uma letra (%i/%i): ", i + 1, TAM);
        scanf("%c", &vetor[i]);

        getchar();
    }

    invertido(vetor);

    return 0;
}