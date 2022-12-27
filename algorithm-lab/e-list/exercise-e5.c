// Rewrite the program for exercise 3 in D list and transform the part that calculates the total purchase value into a function. The function must receive an array and return the sum of the numbers contained in it. The main program must display the result of the function.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

#define TAM 10

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
    // setlocale(LC_ALL, "");
    SetConsoleOutputCP(65001);

    float vetor[TAM] = {1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5};
    float soma;
    int i;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite o valor do produto (%i/%i): ", i + 1, TAM);
        scanf("%f", &vetor[i]);
    }

    soma = somar(vetor);

    printf("Valor total: %f", soma);

    return 0;
}