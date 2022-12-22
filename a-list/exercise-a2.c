// Make a program that calculates the average temperature of one week

#include <stdio.h>

int main()
{
    int temp_mon, temp_tue, temp_wed, temp_thu, temp_fri, temp_sat, temp_sun;

    printf("Enter monday temperature: ");
    scanf("%i", &temp_mon);

    printf("Enter tuesday temperature: ");
    scanf("%i", &temp_tue);

    printf("Enter wednesday temperature: ");
    scanf("%i", &temp_wed);

    printf("Enter thursday temperature: ");
    scanf("%i", &temp_thu);

    printf("Enter friday temperature: ");
    scanf("%i", &temp_fri);

    printf("Enter saturday temperature: ");
    scanf("%i", &temp_sat);

    printf("Enter sunday temperature: ");
    scanf("%i", &temp_sun);

    int average = (temp_mon + temp_tue + temp_wed + temp_thu + temp_fri + temp_sat + temp_sun) / 7;

    printf("The average temperature of the week is: %i\n", average);
}