// Write a program that reads an integer and displays whether it is positive, negative, or zero.

#include <stdio.h>

int main()
{
    float number;

    printf("Enter number: ");
    scanf("%f", &number);

    if (number > 0)
    {
        printf("Positive\n");
    }
    else if (number < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }

    return 0;
}
