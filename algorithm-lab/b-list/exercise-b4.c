// Given any integer, provided by the user, find out if it is even or odd.

#include <stdio.h>

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%i", &number);

    if (number % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}