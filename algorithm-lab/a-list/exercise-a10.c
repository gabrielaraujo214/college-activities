// Write a program that, reading the radius of a circle, prints its area and its circumference. Where: Length = 2 * PI * Radius and Area = PI * Radius ^ 2

#include <stdio.h>

int main()
{
    float radius, pi, lenght, area;

    pi = 3.14;

    printf("Enter radius: ");
    scanf("%f", &radius);

    lenght = 2 * pi * radius;

    printf("Lenght: %f\n", lenght);

    area = pi * (radius * radius);

    printf("Area: %f\n", area);

    return 0;
}