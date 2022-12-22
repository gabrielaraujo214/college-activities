// The snack bar Boca Nervosa sells only one type of sandwich, whose filling includes two slices of cheese, a slice of ham and a slice of hamburger. Knowing that every slice of cheese or ham weighs 50 grams, and that the hamburger slice weighs 100 grams, do a program in which the owner provides the number of sandwiches to be made, and the machine inform the quantities (in kilos) of cheese, ham and meat needed for purchase.

#include <stdio.h>

int main()
{
    int burguers;
    float cheese, ham, hamburguer;

    printf("Enter amount of burguers: ");
    scanf("%i", &burguers);

    cheese = burguers * 0.1;

    ham = burguers * 0.05;

    hamburguer = burguers * 0.1;

    printf("Amount of cheese in kg: %.3f\n", cheese);

    printf("Amount of ham in kg: %.3f\n", ham);

    printf("Amount of hamburguer in kg: %.3f\n", hamburguer);

    return 0;
}