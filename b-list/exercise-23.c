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