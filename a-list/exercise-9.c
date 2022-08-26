#include <stdio.h>

int main()
{
    float grade1, grade2, grade3;
    printf("Enter first grade: ");
    scanf("%f", &grade1);
    printf("Enter second grade: ");
    scanf("%f", &grade2);
    printf("Enter third grade: ");
    scanf("%f", &grade3);
    float total = (grade1 * 0.3) + (grade2 * 0.2) + (grade3 * 0.5);
    printf("Final grade: %.1f\n", total);
    return 0;
}