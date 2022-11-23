#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int qtd200, qtd100, qtd50, qtd20, qtd10, qtd5, qtd2, valor, resto;

    printf("Digite o valor: ");
    scanf("%i", &valor);

    qtd200 = valor / 200;
    resto = valor - qtd200 * 200;

    qtd100 = resto / 100;
    resto = resto - qtd100 * 100;

    qtd50 = resto / 50;
    resto = resto - qtd50 * 50;

    qtd20 = resto / 20;
    resto = resto - qtd20 * 20;

    qtd10 = resto / 10;
    resto = resto - qtd10 * 10;

    qtd5 = resto / 5;
    resto = resto - qtd5 * 5;

    qtd2 = resto / 2;
    resto = resto - qtd5 * 2;

    if (resto == 0)
    {
        printf("Valor: %i\n", valor);
        printf("Notas de 200: %i\n", qtd200);
        printf("Notas de 100: %i\n", qtd100);
        printf("Notas de 50: %i\n", qtd50);
        printf("Notas de 20: %i\n", qtd20);
        printf("Notas de 10: %i\n", qtd10);
        printf("Notas de 5: %i\n", qtd5);
        printf("Notas de 2: %i\n", qtd2);
    }
    else
    {
        printf("Valor inválido!\n");
    }

    return 0;
}