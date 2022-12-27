// Create a program that reads two real numbers from the user and the type of operation desired for these numbers, as shown in the table below. Once this is done, the program must use a function called calculate, which will have 3 parameters, the first two are real numbers and the last one is the type of operation desired, the function must return the result of the chosen calculation. The main program must display the result of the function.

// Option   Types of operation
// 1        Addition
// 2        Subtraction
// 3        Multiplication
// 4        Division

#include <stdio.h>
#include <locale.h>

float calcular(float a, float b, int opcao);

int main()
{
    setlocale(LC_ALL, "");

    int num1, num2, opcao;

    printf("Digite um número: ");
    scanf("%i", &num1);

    printf("Digite outro número: ");
    scanf("%i", &num2);

    printf("Digite a operação desejada:\n");
    printf("1) Soma\n");
    printf("2) Subtração\n");
    printf("3) Multiplicação\n");
    printf("4) Divisão\n");

    printf("Opção: ");
    scanf("%i", &opcao);

    if (opcao < 1 || opcao > 4)
        printf("Opcão não existente!");
    else if (opcao == 4 && num2 == 0)
        printf("Não é possível dividir por zero!");
    else
        printf("Resultado: %f", calcular(num1, num2, opcao));

    return 0;
}

float calcular(float a, float b, int opcao)
{
    switch (opcao)
    {
    case 1:
        return a + b;
    case 2:
        return a - b;
    case 3:
        return a * b;
    case 4:
        return a / b;
    }
}