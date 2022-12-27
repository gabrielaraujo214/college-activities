// Write a program that calculates the sum of any N numbers provided by the user. The value of N it must also be given by the user (it is suggested that N be the first value supplied).

#include <stdio.h>

int main()
{
    int i, amount;
    float number, sum;

    sum = 0;

    printf("Enter amount of numbers to sum: ");
    scanf("%i", &amount);

    // Test
    // printf("i: %i\n", amount);

    for (i = 0; i < amount; i++)
    {
        printf("Enter number (%i/%i): ", i + 1, amount);
        scanf("%f", &number);

        // Test
        // printf("Number: %f\n", number);

        sum += number;

        // Test
        // printf("Sum: %f\n", sum);
    }

    printf("Sum: %f\n", sum);

    return 0;
}