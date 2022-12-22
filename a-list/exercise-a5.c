// The menu of a cafeteria is given by the price table below. write a program which reads the quantity of each item purchased by a given customer and prints the value total of your purchase.
// Hamburger R$ 8.00
// French fries R$ 12.00
// Soda R$ 3.00
// Beer R$ 5.00
// Candy R$ 3.00

#include <stdio.h>

int main()
{
    int hamburguer, french_fries, soda, beer, candy;

    printf("Enter amount of hamburguers bought: ");
    scanf("%i", &hamburguer);

    printf("Enter amount of french-fries bought: ");
    scanf("%i", &french_fries);

    printf("Enter amount of sodas bought: ");
    scanf("%i", &soda);

    printf("Enter amount of beers bought: ");
    scanf("%i", &beer);

    printf("Enter amount of candies bought: ");
    scanf("%i", &candy);

    int total = (hamburguer * 8) + (french_fries * 12) + (soda * 3) + (beer * 5) + (candy * 3);

    printf("Total: $%i\n", total);

    return 0;
}
