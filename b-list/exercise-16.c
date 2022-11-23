#include <stdio.h>

int main()
{
    float grade;
    printf("Enter grade:\n");
    scanf("%f", &grade);

    if (grade < 0)
    {
        printf("Invalid input");
    }
    else if (grade < 2)
    {
        printf("You got an E\n");
    }
    else if (grade < 5)
    {
        printf("You got an D\n");
    }
    else if (grade < 7)
    {
        printf("You got an C\n");
    }
    else if (grade < 9)
    {
        printf("You got an B\n");
    }
    else if (grade <= 10)
    {
        printf("You got an A\n");
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}