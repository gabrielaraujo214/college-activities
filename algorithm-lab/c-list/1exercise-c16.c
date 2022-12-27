// Write a program that prints a table containing all products of integers from 1 to 9. According to the example below:

//   1 2  3  4  5  6  7  8  9
// 1 1 2  3  4  5  6  7  8  9
// 2 2 4  6  8  10 12 14 16 18
// 3 3 6  9  12 15 18 21 24 27
// 4 4 8  12 16 20 24 28 32 36
// 5 5 10 15 20 25 30 35 40 45
// 6 6 12 18 24 30 36 42 48 54
// 7 7 14 21 28 35 42 49 56 63
// 8 8 16 24 32 40 48 56 64 72
// 9 9 18 27 36 45 54 63 72 81

// Hint: To facilitate the alignment, use the characters \t to separate the columns and \n the lines.

#include <stdio.h>

int main()
{
    // loop x
    // loop y
    // x = 1
    // y = 1
    // resultado = x * y
    // escreva \t resultado
    // y++
    // x++

    int x, y, a, b, resultado1, resultado2;

    printf("\t");

    for (b = 1; b <= 9; b++)
    {
        resultado1 = a * b;

        printf("%i\t", resultado1);

        for (x = 1; x <= 9; x++)
        {

            for (y = 1; y <= 9; y++)
            {
                resultado2 = x * y;

                printf("%i\t", resultado2);
            }

            printf("\n");
        }
    }

    return 0;
}