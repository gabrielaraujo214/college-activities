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
