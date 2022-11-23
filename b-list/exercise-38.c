#include <stdio.h>

int main()
{
    int age, value;

    printf("Enter age: ");
    scanf("%i", &age);

    if (age < 0)
    {
        printf("Invalid age!");
        return 1;
    }
    else if (age < 11)
        value = 30;
    else if (age < 30)
        value = 60;
    else if (age < 46)
        value = 120;
    else if (age < 60)
        value = 150;
    else if (age < 66)
        value = 250;
    else
        value = 400;

    printf("Value: $%i", value);
    return 0;
}