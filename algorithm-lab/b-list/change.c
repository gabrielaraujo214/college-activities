// User enter a currency value, and the program returns the amounts of each bill needed to give the change

#include <stdio.h>

int main()
{
    int q100, q50, q20, q10, q5, q2, q1, value, remainder;

    printf("Enter value: ");
    scanf("%i", &value);

    q100 = value / 100;
    remainder = value - q100 * 100;

    q50 = remainder / 50;
    remainder = remainder - q50 * 50;

    q20 = remainder / 20;
    remainder = remainder - q20 * 20;

    q10 = remainder / 10;
    remainder = remainder - q10 * 10;

    q5 = remainder / 5;
    remainder = remainder - q5 * 5;

    q2 = remainder / 2;
    remainder = remainder - q5 * 2;

    q1 = remainder / 1;
    remainder = remainder - q1 * 1;

    if (remainder == 0)
    {
        printf("Value: %i\n", value);

        printf("100 bills: %i\n", q100);
        printf("50 bills: %i\n", q50);
        printf("20 bills: %i\n", q20);
        printf("10 bills: %i\n", q10);
        printf("5 bills: %i\n", q5);
        printf("2 bills: %i\n", q2);
        printf("1 bills: %i\n", q1);
    }
    else
    {
        printf("Invalid value!\n");
    }

    return 0;
}