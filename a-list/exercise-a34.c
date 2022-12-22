// A soda vat is made with 8 parts of mineral water and 2 parts of passion fruit juice. Make an algorithm to calculate how many liters of water and juice are needed to prepare X liters of soft drink (entered by the user).

#include <stdio.h>

int main()
{
    float soft_drink, water, juice;

    printf("Enter amount of soft drink in liters: ");
    scanf("%f", &soft_drink);

    water = soft_drink * 0.8;

    juice = soft_drink * 0.2;

    printf("Amount of water needed: %.3f\n", water);

    printf("Amount of juice needed: %.3f", juice);

    return 0;
}
