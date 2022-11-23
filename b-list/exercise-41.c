#include <stdio.h>

int main()
{
    int planet;
    float weight;

    printf("Discover your weight in space!\n");
    printf("Choose planet:\n");
    printf("1) Mercury\n");
    printf("2) Venus\n");
    printf("3) Mars\n");
    printf("4) Jupyter\n");
    printf("5) Saturn\n");
    printf("6) Uranus\n");
    printf("7) Quit\n");
    scanf("%i", &planet);

    printf("Enter weight: ");
    scanf("%f", &weight);

    switch (planet)
    {
    case 1:
        weight = weight * 0.37;
        printf("Your weight in Mercury would be: %.3f", weight);
        break;
    case 2:
        weight = weight * 0.88;
        printf("Your weight in Venus would be %.3f", weight);
        break;
    case 3:
        weight = weight * 0.38;
        printf("Your weight in Mars would be: %.3f", weight);
        break;
    case 4:
        weight = weight * 2.64;
        printf("Your weight in Jupyter would be: %.3f", weight);
        break;
    case 5:
        weight = weight * 1.15;
        printf("Your weight in Saturn would be: %.3f", weight);
        break;
    case 6:
        weight = weight * 1.17;
        printf("Your weight in Uranus would be: %.3f", weight);
        break;
    }
    return 0;
}