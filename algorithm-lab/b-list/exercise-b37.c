// Create a program that reads a person's age and informs their voting class: non-voter (under 16); mandatory voter (between 18 and under 65); optional voter (from 16 to 18 years old and over 65 years old, inclusive).

#include <stdio.h>

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%i", &age);

    if (age < 0)
    {
        printf("Invalid age!");
        return 1;
    }
    else if (age < 16)
        printf("Not a voter");
    else if (age < 18 || age > 65)
        printf("Optional voter");
    else
        printf("Mandatory voter");

    return 0;
}