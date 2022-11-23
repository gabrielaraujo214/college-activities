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