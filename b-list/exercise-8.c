#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter A value: ");
    scanf("%i", &a);
    printf("Enter B value: ");
    scanf("%i", &b);
    printf("A is greater than 0?\n");
    if (a > 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    printf("B is greater than 0?\n");
    if (b > 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    printf("A and B are greater than 0?\n");
    if (a > 0 && b > 0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}