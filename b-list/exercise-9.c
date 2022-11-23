#include <stdio.h>

int main()
{
    float a, b;
    printf("Enter value for A: ");
    scanf("%f", &a);
    printf("Enter value for B: ");
    scanf("%f", &b);

    if (a == 0)
        printf("A is equal to zero: True\n");
    else
        printf("A is equal to zero: False\n");

    if (b < 0)
        printf("B is smaller than zero: True\n");
    else if (b > 0)
        printf("B is smaller than zero: False\n");
    else
        printf("B is equal to zero\n");

    if (a == b)
        printf("A and B are equal: True\n");
    else
        printf("A and B are equal: False\n");
}