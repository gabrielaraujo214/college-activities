// Create an algorithm that reads an integer between 1 and 12 and writes the month corresponding. If the user enters a number outside this range, a message stating that there is no month with this number.

#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number: ");
    scanf("%i", &month);

    switch (month)
    {
    case 1:
        printf("You chose January!");

        break;

    case 2:
        printf("You chose February!");

        break;

    case 3:
        printf("You chose March!");

        break;

    case 4:
        printf("You chose April!");

        break;

    case 5:
        printf("You chose May!");

        break;

    case 6:
        printf("You chose June!");

        break;

    case 7:
        printf("You chose July!");

        break;

    case 8:
        printf("You chose August!");

        break;

    case 9:
        printf("You chose September!");

        break;

    case 10:
        printf("You chose October!");

        break;

    case 11:
        printf("You chose November!");

        break;

    case 12:
        printf("You chose December!");

        break;

    default:
        printf("There's no month with this number!");

        break;
    }

    return 0;
}