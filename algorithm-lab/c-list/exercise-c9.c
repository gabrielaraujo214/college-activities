// The factorial of a positive integer is its product of all its predecessors up to 1 , N! is represented. By definition the factorial of 0! = 1 and the factorial of 1! = 1!. Example: 5! = 5 * 4 * 3 * 2 * 1 = 120. Write a program that asks the user for a number and prints the factorial of this number on the screen.

#include <stdio.h>

int main()
{
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
