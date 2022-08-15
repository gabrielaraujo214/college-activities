// EN
// Write a program that reads two numbers and prints the result of adding, subtracting, multiplying and dividing these numbers.
// PT
// Elabore um programa que leia dois números e imprima o resultado da soma, da subtração, da multiplicação e da divisão destes números.
#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Insert first number: ");
    scanf("%d", &a);
    printf("Insert second number: ");
    scanf("%d", &b);
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    return 0;
}