#include <stdio.h>

int main()
{
    float height, weight;
    int age;
    printf("Enter height: ");
    scanf("%f", &height);
    printf("Enter age: ");
    scanf("%i", &age);
    printf("Enter weight: ");
    scanf("%f", &weight);
    if (height >= 1.7 && age >= 21 && age <= 35 && weight >= 60 && weight <= 95)
    {
        printf("Fit");
    }
    else
    {
        printf("Unfit");
    }
    return 0;
}