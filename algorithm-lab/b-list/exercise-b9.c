// Write a program that reads two values, which we will call A and B, given by the user, displaying True or False responses to the following questions: a) Is A equal to zero?; b) B is less than zero; and c) Are A OR B greater than zero? Use logical operators to formulate the expressions needed to evaluate the values.

#include <stdio.h>

int main()
{
    float a, b;

    printf("Enter value for A: ");
    scanf("%f", &a);

    printf("Enter value for B: ");
    scanf("%f", &b);

    if (a == 0)
        printf("A is equal to zero: True\n");
    else
        printf("A is equal to zero: False\n");

    if (b < 0)
        printf("B is smaller than zero: True\n");
    else if (b > 0)
        printf("B is smaller than zero: False\n");
    else
        printf("B is equal to zero\n");

    if (a == b)
        printf("A and B are equal: True\n");
    else
        printf("A and B are equal: False\n");
}