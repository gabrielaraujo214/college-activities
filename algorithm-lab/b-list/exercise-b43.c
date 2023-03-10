// Make a program that shows a menu with the following options:
// 1. sum;
// 2. multiplication;
// 3. square root;
// 4. finalize.
// The program must receive the desired option, receive the necessary data for the processing of each option, carry out the operation and print the result. In the finish option, nothing should happen.

#include <stdio.h>
#include <math.h>

int main()
{
    int option;
    float num1, num2, result;

    printf("Choose an option:\n");
    printf("1. Sum\n");
    printf("2. Multiplication\n");
    printf("3. Square root\n");
    printf("4. Exit\n");
    scanf("%i", &option);

    switch (option)
    {
    case 1:
        printf("Enter a number: ");
        scanf("%f", &num1);

        printf("Enter another number: ");
        scanf("%f", &num2);

        result = num1 + num2;

        printf("%f + %f = %f", num1, num2, result);

        break;

    case 2:
        printf("Enter a number: ");
        scanf("%f", &num1);

        printf("Enter another number: ");
        scanf("%f", &num2);

        result = num1 * num2;

        printf("%f * %f = %f", num1, num2, result);

        break;

    case 3:
        printf("Enter a number: ");
        scanf("%f", &num1);

        result = sqrt(num1);

        printf("The square root of %f is: %f", num1, result);

        break;
    }

    return 0;
}