// The table of a given number is a table of products of that number with the numbers from 1 to 9. Write a program that asks the user for a number, calculates the table of this number by storing the values in a array. Then read this array 2 times, the first print the table from 1 to 9 and in the second print the table from 9 to 1.

#include <stdio.h>

#define TAM 9

void imprimir(float num, float vetor[]);
void imprimir_invertido(float num, float vetor[]);

int main()
{

    float vetor[TAM];
    int num = 5, i;

    for (i = 0; i < TAM; i++)
        vetor[i] = num * (i + 1);

    imprimir(num, vetor);

    printf("\n");

    imprimir_invertido(num, vetor);

    return 0;
}

void imprimir(float num, float vetor[])
{
    int i;

    for (i = 0; i < TAM; i++)
        printf("%f * %i = %f\n", num, i + 1, vetor[i]);
}

void imprimir_invertido(float num, float vetor[])
{
    int i;

    for (i = TAM - 1; i >= 0; i--)
        printf("%f * %i = %f\n", num, i + 1, vetor[i]);
}