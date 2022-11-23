#include <stdio.h>

int main()
{
    float factory_price;
    printf("Enter price of the factory: ");
    scanf("%f", &factory_price);
    float total = factory_price * 1.12 + factory_price * 1.45;
    printf("Total: $%.2f\n", total);
    return 0;
}
