#include <stdio.h>

int main()
{
    float refreshment, water, juice;
    printf("Enter amount of refresment in liters: ");
    scanf("%f", &refreshment);
    water = refreshment * 0.8;
    juice = refreshment * 0.2;
    printf("Amount of water needed: %.3f\n", water);
    printf("Amount of juice needed: %.3f", juice);
    return 0;
}
