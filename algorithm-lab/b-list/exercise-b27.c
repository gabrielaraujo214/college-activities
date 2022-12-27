// Write a program that asks the user to enter a number corresponding to a day of the week and then displays the name of the day on the screen. Hint: In C, use the switch command.

#include <stdio.h>

int main()
{
    int weekday;

    printf("Enter weekday by number:\n");
    printf("1) Sunday\n");
    printf("2) Monday\n");
    printf("3) Tuesday\n");
    printf("4) Wednesday\n");
    printf("5) Thursday\n");
    printf("6) Friday\n");
    printf("7) Saturday\n");

    scanf("%i", &weekday);

    switch (weekday)
    {
    case 1:
        printf("The option chose was sunday\n");

        break;

    case 2:
        printf("The option chose was monday\n");

        break;

    case 3:
        printf("The option chose was tuesday\n");

        break;

    case 4:
        printf("The option chose was wednesday\n");

        break;

    case 5:
        printf("The option chose was thursday\n");

        break;

    case 6:
        printf("The option chose was friday\n");

        break;

    case 7:
        printf("The option chose was saturday\n");

        break;

    default:
        printf("Invalid input\n");

        break;
    }

    return 0;
}