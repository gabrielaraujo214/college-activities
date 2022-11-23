#include <stdio.h>

int main()
{
    float radius, pi;
    pi = 3.14;
    printf("Enter radius: ");
    scanf("%f", &radius);
    float lenght = 2 * pi * radius;
    printf("Lenght: %f\n", lenght);
    float area = pi * (radius * radius);
    printf("Area: %f\n", area);
    return 0;
}