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
}