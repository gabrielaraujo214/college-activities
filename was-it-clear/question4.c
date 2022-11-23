#include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f", &a);
    b = 0;
    c = 0;
    while (c < a)
    {
        b = b + 0.1;
        c = b * b;
    }
    printf("%f", b);
}