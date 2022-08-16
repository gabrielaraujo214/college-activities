// Write a program that reads a temperature in Celsius and prints the temperature converted to Fahrenheit
#include <stdio.h>

int main()
{
    float temp_celsius;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &temp_celsius);
    float temp_fahrenheit = (1.8 * temp_celsius) + 32;
    printf("Temperature in Fahrenheit: %.0f\n", temp_fahrenheit);
}