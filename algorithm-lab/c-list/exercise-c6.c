// Calculate the average of N grades of students in a class. The program must stop reading values when it is given a negative value as a grade.

#include <stdio.h>

int main()
{
    float grade, total = 0, average = 0;
    int counter = 0;

    do
    {
        printf("Enter grade: ");
        scanf("%f", &grade);

        if (grade >= 0)
        {
            total += grade;

            counter++;
        }

    } while (grade >= 0);

    average = total / counter;

    printf("Average: %f", average);

    return 0;
}
