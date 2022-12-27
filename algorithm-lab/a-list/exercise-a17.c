// Read two integer values for variables A and B, swap the values so that the variable A will have the value of variable B, and variable B will have the value of variable A. Present the exchanged values.

#include <stdio.h>

int main()
{
    int a, b, a_copy;

    printf("Enter value of A: ");
    scanf("%i", &a);

    printf("Enter value of B: ");
    scanf("%i", &b);

    a_copy = a;

    a = b;

    b = a_copy;

    printf("New value of A: %i\n", a);

    printf("New value of B: %i\n", b);

    return 0;
}
