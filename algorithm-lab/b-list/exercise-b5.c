// Write a program that reads a real value corresponding to a measurement in meters, converting the given value to feet (1 meter = 3.315 feet), displaying the given values and converted. If the user provides a negative value, a message should be displayed and the conversion operation must not be performed.

#include <stdio.h>

int main()
{
    float meters, feet;

    printf("Enter measure in meters: ");
    scanf("%f", &meters);

    if (meters >= 0)
    {
        printf("Meters: %f\n", meters);

        feet = meters * 3.315;

        printf("Feet: %f\n", feet);
    }
    else
    {
        printf("Measure can't be less than zero'\n");
    }

    return 0;
}
