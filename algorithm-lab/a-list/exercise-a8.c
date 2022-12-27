// The consumer cost of a new car is the sum of the factory cost plus the distributor percentage and taxes (applied to factory cost). Assuming that the distributor's percentage is 12% and taxes 45%, design a program that read the factory value and print the final price of a car.

#include <stdio.h>

int main()
{
    float factory_price, total;

    printf("Enter price of the factory: ");
    scanf("%f", &factory_price);

    total = factory_price * 1.12 + factory_price * 1.45;

    printf("Total: $%.2f\n", total);

    return 0;
}
