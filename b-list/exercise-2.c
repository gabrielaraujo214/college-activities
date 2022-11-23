#include <stdio.h>

int main()
{
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);
    if (number > 100)
    {
        printf("Number is greater than 100\n");
    }
    else
    {
        printf("Number is lower than 100\n");
    }
    return 0;
}