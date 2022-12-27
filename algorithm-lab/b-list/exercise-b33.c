// Algoritmolândia city hall opened a line of credit for statutory employees. The maximum value of the benefit cannot exceed 30% of the gross salary. Make an algorithm that allows you to enter the gross salary and the amount of the installment, and inform if the loan may or may not be granted.

#include <stdio.h>

int main()
{
    float salary, installment;

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter installment: ");
    scanf("%f", &installment);

    if (salary * 0.3 < installment)
        printf("Loan refused! =(");
    else
        printf("Loan accepted! =)");

    return 0;
}