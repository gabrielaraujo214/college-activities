#include <stdio.h>

int main()
{
    int number;

    scanf("%i", &number);

    if (number % 2 == 0)
        printf("Even");
    else
        printf("Odd");
}