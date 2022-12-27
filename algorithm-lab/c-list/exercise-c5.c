// Write a program that calculates the sum of any N numbers supplied by the user. The program must stop reading (and therefore adding) values when the number 0 (zero) is introduced.

#include <stdio.h>

int main()
{
    int n, sum = 0;

    do
    {
        printf("Enter a number: ");
        scanf("%i", &n);

        sum += n;

    } while (n != 0);

    printf("Sum: %i", sum);

    return 0;
}