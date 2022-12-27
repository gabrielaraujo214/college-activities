// Create a program that reads two real numbers from the user and the type of operation desired for these numbers, as shown in the table below. Once this is done, the program must use a function called calculate, which will have 3 parameters, the first two are real numbers and the last one is the type of operation desired, the function must return the result of the chosen calculation. The main program must display the result of the function.

// Option   Types of operation
// 1        Addition
// 2        Subtraction
// 3        Multiplication
// 4        Division

#include <stdio.h>
#include <locale.h>
#include <windows.h>

float calcular(float n1, float n2, int opcao)
{
    float resultado;

    switch (opcao)
    {
    case 1:
        resultado = n1 + n2;
        break;

    case 2:
        resultado = n1 - n2;
        break;

    case 3:
        resultado = n1 * n2;
        break;

    case 4:
        resultado = n1 / n2;
        break;

    default:
        resultado = 0.0;
        break;
    }

    return resultado;
}

int main()
{
    // setlocale(LC_ALL, "");
    SetConsoleOutputCP(65001);

    float n1, n2, resultado;
    int opcao;

    printf("Digite um número: ");
    scanf("%f", &n1);

    printf("Digite outro número: ");
    scanf("%f", &n2);

    printf("Digite a operação desejada:\n");
    printf("1) Adição\n");
    printf("2) Subtração\n");
    printf("3) Multiplicação\n");
    printf("4) Divisão\n");
    printf("Opção: ");
    scanf("%i", &opcao);

    if (opcao < 1 || opcao > 4)
        printf("Opção não existente!");
    else if (opcao == 4 && n2 == 0)
        printf("Não é possível dividir por zero!");
    else
    {
        resultado = calcular(n1, n2, opcao);

        printf("Resultado: %f", resultado);
    }

    return 0;
}