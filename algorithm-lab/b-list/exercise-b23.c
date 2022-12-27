// In a certain market, the normal selling price of a product is given by the value cost plus 40%. Each product has a type (1 - Perishable, 2 - Not perishable). In addition, the market works with promotions, as described below:

// PERISHABLE PRODUCTS
// Promotion    Criterion                                                         Discount
// Promotion 1  Sale value greater than R$20.00                                   20%
// Promotion 2  Sale value greater than R$10.00 and less than or equal to R$20.00 10%
// Promotion 3  Other sales values                                                15%

// NON-PERISHABLE PRODUCTS
// Promotion    Criterion                       Discount
// Promotion 4  Sale value greater than R$50.00 5 %

// Write a program that reads the cost value of a product and its type. through the information above, calculate and print the total value of the product and the promotion that it is framed. If the product does not fit into the promotions above, print “Promotion 0”.

#include <stdio.h>

int main()
{
    float cost, price, sale;
    char type;

    sale = 0;

    printf("Enter cost of the product: ");
    scanf("%f", &cost);
    getchar();

    printf("Enter type of the product:\n");
    printf("(P) - Perishable\n");
    printf("(N) - Not Perishable\n");
    scanf("%c", &type);

    price = cost * 1.4;

    switch (type)
    {
    case 'P':
        if (price > 20)
        {
            sale = 1;
            price = price * 0.8;
        }
        else if (price > 10)
        {
            sale = 2;
            price = price * 0.9;
        }
        else
        {
            sale = 3;
            price = price * 0.85;
        }

        break;

    default:
        if (price > 50)
        {
            sale = 4;
            price = price * 0.95;
        }

        break;
    }

    return 0;
}