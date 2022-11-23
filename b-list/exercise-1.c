#include <stdio.h>

int main()
{
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);
    if (number > 50)
    {
        printf("Number is greater than 50\n");
    }
    return 0;
}