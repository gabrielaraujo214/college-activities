#include <stdio.h>

int main()
{
    float salary, installment;

    printf("Enter salary: ");
    scanf("%f", &salary);

    printf("Enter installment: ");
    scanf("%f", &installment);

    if (salary * 0.3 < installment)
    {
        printf("Loan refused! =(");
    }
    else
    {
        printf("Loan accepted! =)");
    }
    return 0;
}