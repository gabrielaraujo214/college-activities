// In a computer programming course, a student's final grade is given at from its performance in three aspects. There is a theory test worth 30% of the final grade. A second theoretical test which is equivalent to 20%. And, one last proof, which amounts to 50% of the grade. Create a program that reads the grade of the three assessments and prints the final grade from student.

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