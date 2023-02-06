// You were hired by a large educational institution and your first mission is to develop a program that reads all the grades of a class that has 100 students and shows the lowest grade, the highest grade and the average of the grades in the room. To do so, write a program in C that declares an array with 100 positions of real numbers and makes a loop to read each of the notes and store them in the array. At the end, present the 3 requested items.

#include <stdio.h>

// Declaring amount of students
#define STUDENTS 100

int main()
{
    float grades[STUDENTS], lowest, highest, average;

    int i;

    highest = 0;
    average = 0;

    for (i = 0; i < STUDENTS; i++)
    {
        printf("Enter grade of student %i: ", i + 1);
        scanf("%f", &grades[i]);

        // Test
        // printf("grade: %f\n", grades[i]);

        if (i == 0)
            lowest = grades[i];

        if (grades[i] < lowest)
        {
            lowest = grades[i];
        }

        if (grades[i] > highest || highest == 0)
        {
            highest = grades[i];
        }

        // Test
        // printf("lowest: %f\n", lowest);
        // printf("highest: %f\n", highest);

        average += grades[i];
    }

    average = average / STUDENTS;

    printf("\nRESULTS\n");

    printf("lowest grade: %f\n", lowest);

    printf("highest grade: %f\n", highest);

    printf("Average: %f\n", average);

    return 0;
}
