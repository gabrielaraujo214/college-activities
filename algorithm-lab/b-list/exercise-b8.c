// Write a program that reads two values, which we will call A and B, provided by the user, displaying True or False answers to the following questions: a) Is A greater than zero?; b) B is greater than zero; and c) Are A and B greater than zero? Use logical operators to formulate the expressions needed to evaluate the values.

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter A value: ");
    scanf("%i", &a);

    printf("Enter B value: ");
    scanf("%i", &b);

    printf("A is greater than 0?\n");

    if (a > 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    printf("B is greater than 0?\n");

    if (b > 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    printf("A and B are greater than 0?\n");

    if (a > 0 && b > 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}