#include <stdio.h>

int main()
{
    float number;
    printf("Enter number: ");
    scanf("%f", &number);
    if (number > 0)
    {
        printf("Positive\n");
    }
    else if (number < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
    return 0;
}
