// Write a program that reads an integer value corresponding to an amount of seconds, converting the given value into running hours knowing that 3600 seconds equal 1 hour, displaying the given and converted values. If the user provides a negative value, a message should be displayed and the conversion operation should not be performed.

#include <stdio.h>

int main()
{
    int seconds;
    float hours;

    printf("Enter seconds: ");
    scanf("%i", &seconds);

    if (seconds >= 0)
    {
        hours = seconds / 3600.0;

        printf("Hours: %.1f\n", hours);
    }
    else
    {
        printf("Seconds can't be less than zero'\n");
    }

    return 0;
}