// Write a program that declares an array of integers with 10 positions and reads each of the values. Then, read this array and sort the values in ascending order and display them on the screen.

#include <stdio.h>

#define TAM 10

int main()
{

    int lista[TAM], i, j, aux;

    for (i = 0; i < TAM; i++)
    {
        printf("Digite um número (%i/%i): ", i + 1, TAM);
        scanf("%i", &lista[i]);
    }

    for (i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (lista[j + 1] < lista[j])
            {
                aux = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = aux;
            }
        }
    }

    for (i = 0; i < TAM; i++)
    {
        if (i < TAM - 1)
            printf("%i, ", lista[i]);
        else
            printf("%i", lista[i]);
    }

    return 0;
}