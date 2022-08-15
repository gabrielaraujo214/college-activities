// Write a program that reads two numbers and prints the result of adding, subtracting, multiplying and dividing these numbers.
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