// Make a program that uses a function called subtraction, this function must receive 2 integer numbers and return the result of subtracting the numbers passed. The program main should display the result of the function.

#include <stdio.h>

float subtraction(float a, float b)
{
    return a - b;
}

int main()
{

    float num1, num2;

    printf("Enter a number: ");
    scanf("%f", &num1);

    printf("Enter another number: ");
    scanf("%f", &num2);

    printf("%f - %f = %f", num1, num2, subtraction(num1, num2));

    return 0;
}
