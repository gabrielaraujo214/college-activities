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