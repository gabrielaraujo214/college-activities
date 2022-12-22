// A car dealership pays its employees a salary of R$350.00 plus an commission of R$200.00 for each car sold. Write a program that reads the number of cars sold by a certain employee and print his total salary.

#include <stdio.h>

int main()
{
    int cars;

    printf("Enter amount of cars sold: ");
    scanf("%i", &cars);

    int total = 350 + (cars * 200);

    printf("Total: $%i\n", total);

    return 0;
}