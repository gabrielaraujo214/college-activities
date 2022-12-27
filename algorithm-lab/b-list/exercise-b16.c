// In public education, grades are usually given through grades (A, B, C, D, E). Write a program that reads a numerical note from 0 to 10 and displays the concept related to this note, as shown in the table below.
// Concept          Note
// From 0.0 to 1.9  E
// From 2.0 to 4.9  D
// From 5.0 to 6.9  C
// From 7.0 to 8.9  B
// From 9.0 to 10.0 A

#include <stdio.h>

int main()
{
    float grade;
    printf("Enter grade:\n");
    scanf("%f", &grade);

    if (grade < 0)
        printf("Invalid input");
    else if (grade < 2)
        printf("You got an E\n");
    else if (grade < 5)
        printf("You got an D\n");
    else if (grade < 7)
        printf("You got an C\n");
    else if (grade < 9)
        printf("You got an B\n");
    else if (grade <= 10)
        printf("You got an A\n");
    else
        printf("Invalid input\n");

    return 0;
}