// Make a program that uses a function called subtraction, this function must receive 2 integer numbers and return the result of subtracting the numbers passed. The program main should display the result of the function.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int subtracao(int n1, int n2)
{
    return n1 - n2;
}

int main()
{
    // setlocale(LC_ALL, "");
    SetConsoleOutputCP(65001);

    int n1, n2, resultado;

    printf("Digite um número: ");
    scanf("%i", &n1);

    printf("Digite outro número: ");
    scanf("%i", &n2);

    resultado = subtracao(n1, n2);

    printf("%i - %i = %i", n1, n2, resultado);

    return 0;
}