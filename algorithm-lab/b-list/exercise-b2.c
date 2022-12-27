// Read any number provided by the user. Determine if the number is greaterthan 100, printing a message indicating that the "value is greater than 100" or a message indicating that the "value is less than or equal to 100".

#include <stdio.h>

int main()
{
    float number;

    printf("Enter a number: ");
    scanf("%f", &number);

    if (number > 100)
        printf("Number is greater than 100\n");
    else
        printf("Number is lower than 100\n");

    return 0;
}