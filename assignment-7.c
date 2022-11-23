#include <stdio.h>
#include <locale.h>

#define TAM 10

int main()
{
    setlocale(LC_ALL, "");

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