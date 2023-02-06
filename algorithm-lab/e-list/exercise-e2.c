// Create a program that reads two real numbers from the user and the type of operation desired for these numbers, as shown in the table below. Once this is done, the program must use a function called calculate, which will have 3 parameters, the first two are real numbers and the last one is the type of operation desired, the function must return the result of the chosen calculation. The main program must display the result of the function.

// Option   Types of operation
// 1        Addition
// 2        Subtraction
// 3        Multiplication
// 4        Division

#include <stdio.h>

float calculate(float a, float b, int option);

int main()
{
    int num1, num2, option;

    printf("Enter a number: ");
    scanf("%i", &num1);

    printf("Enter another number: ");
    scanf("%i", &num2);

    printf("Enter desired operation:\n");
    printf("1) Sum\n");
    printf("2) Subtraction\n");
    printf("3) Multiplication\n");
    printf("4) Division\n");

    printf("Option: ");
    scanf("%i", &option);

    if (option < 1 || option > 4)
        printf("Optuion not existent!");
    else if (option == 4 && num2 == 0)
        printf("Can't divide by zero!");
    else
        printf("Result: %f", calculate(num1, num2, option));

    return 0;
}

float calculate(float a, float b, int option)
{
    switch (option)
    {
    case 1:
        return a + b;
    case 2:
        return a - b;
    case 3:
        return a * b;
    case 4:
        return a / b;
    }
}