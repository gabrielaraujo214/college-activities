// Rewrite the program for exercise 2 from D list and transform the part that sums up the values entered by the user into a function. The function must receive an array and return the sum of the numbers contained in it. The main program must display the result of the function.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

#define TAM 7

float somar(float vetor[])
{
    float soma = 0;
    int i;

    for (i = 0; i < TAM; i++)
        soma += vetor[i];

    return soma;
}

int main()
{
    // setlocale(LC_ALL,"");
    SetConsoleOutputCP(65001);

    float vetor[TAM];
    float soma;
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite um número (%i/%i): ", i + 1, TAM);
        scanf("%f", &vetor[i]);
    }

    soma = somar(vetor);

    printf("Soma: %f", soma);

    return 0;
}