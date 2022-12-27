// The table of a given number is a table of products of this number with the numbers 1 to 9. Write a program that asks the user for a number and prints the table of this number on the screen. If given value is invalid the program should just display a warning message. write a program using each repetition structure studied.

#include <stdio.h>

int main()
{
    float number, result;
    char answer;

    do
    {
        do
        {
            printf("Enter number from 0 to 10: ");
            scanf("%f", &number);

            getchar();

        } while (number < 1 || number > 10);

        int multiplier = 1;

        while (multiplier <= 10)
        {
            result = number * multiplier;

            printf("%f * %i = %f\n", number, multiplier, result);

            multiplier++;
        }

        printf("Do you want to quit? ");

        scanf("%c", &answer);

    } while (answer != 'y' && answer != 'Y');

    return 0;
}