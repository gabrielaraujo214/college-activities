// Write a program that declares an array of integers with 10 positions and reads each of the values. Then, read this array and sort the values in ascending order and display them on the screen.

#include <stdio.h>

#define SIZE 10

int main()
{

    int list[SIZE], i, j, aux;

    for (i = 0; i < SIZE; i++)
    {
        printf("Enter a number (%i/%i): ", i + 1, SIZE);
        scanf("%i", &list[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (list[j + 1] < list[j])
            {
                aux = list[j];
                list[j] = list[j + 1];
                list[j + 1] = aux;
            }
        }
    }

    for (i = 0; i < SIZE; i++)
    {
        if (i < SIZE - 1)
            printf("%i, ", list[i]);
        else
            printf("%i", list[i]);
    }

    return 0;
}