#include <stdio.h>
// #include <locale.h>

int main()
{
    // setlocale(LC_ALL, "");
    int i, factorial, result;

    printf("Enter number to factor: ");
    scanf("%i", &factorial);

    result = 1;

    // Test
    // printf("Factorial: %i\n", factorial);

    for (i = 1; i <= factorial; i++)
    {
        result = result * i;

        // Test
        // printf("Result: %i\n", result);
        // printf("i: %i\n", result);
    }

    printf("Result: %i\n", result);
    return 0;
}
