#include <stdio.h>
// #include <locale.h>

int main()
{
    // setlocale(LC_ALL, "");
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