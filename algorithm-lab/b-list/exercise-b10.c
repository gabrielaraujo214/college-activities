// For an aviator to enroll in a certain piloting course, he needs to satisfy the following conditions: Minimum height 1.70m; Age between 21 and 35 years inclusive; Weight between 60kg and 95kg. Write a program that reads candidate data and reports whether it or not you are eligible to enroll in the course.

#include <stdio.h>

int main()
{
    float height, weight;
    int age;

    printf("Enter height: ");
    scanf("%f", &height);

    printf("Enter age: ");
    scanf("%i", &age);

    printf("Enter weight: ");
    scanf("%f", &weight);

    if (height >= 1.7 && age >= 21 && age <= 35 && weight >= 60 && weight <= 95)
        printf("Fit");
    else
        printf("Unfit");

    return 0;
}