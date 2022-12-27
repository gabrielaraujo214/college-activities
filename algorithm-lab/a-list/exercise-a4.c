// Write a program that reads the amount of rain in mm and prints this amount in inches

#include <stdio.h>

int main()
{
    float rain_mm;

    printf("Enter amount of rain in mm: ");
    scanf("%f", &rain_mm);

    float rain_inches = rain_mm / 25.4;

    printf("The amount of rain in inches is: %.2f\n", rain_inches);

    return 0;
}