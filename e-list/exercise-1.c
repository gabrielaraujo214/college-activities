#include <stdio.h>
#include <locale.h>

float subtracao(float a, float b)
{
    return a - b;
}

int main()
{
    setlocale(LC_ALL, "");

    float num1, num2;

    printf("Digite um número: ");
    scanf("%f", &num1);

    printf("Digite outro número: ");
    scanf("%f", &num2);

    printf("Resultado: %f", subtracao(num1, num2));

    return 0;
}
