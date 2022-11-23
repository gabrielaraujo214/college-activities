#include <stdio.h>

int main()
{
    float price;
    printf("Enter price of the product: ");
    scanf("%f", &price);
    float tax = price * 0.17;
    printf("Tax: $%.2f\n", tax);
    float total = price * 1.17;
    printf("Total: $%.2f\n", total);
    return 0;
}