// Write an algorithm to calculate how many horseshoes are needed to equip all horses purchased by Coice de Mula stud farm.

#include <stdio.h>

int main()
{
    int horses;

    printf("Enter amount of horses: ");
    scanf("%i", &horses);

    int horseshoes = horses * 4;

    printf("Amount of horseshoes: %i\n", horseshoes);

    return 0;
}