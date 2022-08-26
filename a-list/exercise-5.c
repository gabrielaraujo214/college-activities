#include <stdio.h>

int main()
{
    int hamburguer;
    int french_fries;
    int soda;
    int beer;
    int candy;
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
