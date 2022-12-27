// Read any number provided by the user. Determine whether the number is greater than 50 by printing a message indicating this fact.

#include <stdio.h>

int main()
{
    float number;

    printf("Enter a number: ");
    scanf("%f", &number);

    if (number > 50)
        printf("Number is greater than 50\n");

    return 0;
}