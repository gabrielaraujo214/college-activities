// The table of a given number is a table of products of that number with the numbers from 1 to 9. Write a program that asks the user for a number, calculates the table of this number by storing the values in a array. Then read this array 2 times, the first print the table from 1 to 9 and in the second print the table from 9 to 1.

#include <stdio.h>

#define SIZE 9

void print(float num, float array[]);
void print_inverted(float num, float array[]);

int main()
{

    float array[SIZE];
    int num, i;

    printf("Enter a number: ");
    scanf("%i", &num);

    for (i = 0; i < SIZE; i++)
        array[i] = num * (i + 1);

    print(num, array);

    printf("\n");

    print_inverted(num, array);

    return 0;
}

void print(float num, float array[])
{
    int i;

    for (i = 0; i < SIZE; i++)
        printf("%f * %i = %f\n", num, i + 1, array[i]);
}

void print_inverted(float num, float array[])
{
    int i;

    for (i = SIZE - 1; i >= 0; i--)
        printf("%f * %i = %f\n", num, i + 1, array[i]);
}