// In a given store, the price of products on the shelf is shown without adding the tax. Considering that the tax value is 17% on the shelf value, create a program that reads the price of a product and shows the tax amount and the total amount to be paid by the consumer.

#include <stdio.h>

int main()
{
    float price, tax, total;

    printf("Enter price of the product: ");
    scanf("%f", &price);

    tax = price * 0.17;

    printf("Tax: $%.2f\n", tax);

    total = price * 1.17;

    printf("Total: $%.2f\n", total);

    return 0;
}