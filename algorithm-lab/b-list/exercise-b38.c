// After the government releases health plan fees, people started doing research to find a good plan, not too expensive. a seller of a health plan presented the following ranges. Create an algorithm that enters the age of a person and print the amount that he must pay:
//  Up to 10 years - R$ 30.00;
//  Over 10 up to 29 years old - BRL 60.00;
//  Over 29 up to 45 years old - R$ 120.00;
//  Over 45 up to 59 years old - R$ 150.00;
//  Over 59 up to 65 years old - R$ 250.00;
//  Over 65 years - R$ 400.00.

#include <stdio.h>

int main()
{
    int age, value;

    printf("Enter age: ");
    scanf("%i", &age);

    if (age < 0)
    {
        printf("Invalid age!");
        return 1;
    }
    else if (age < 11)
        value = 30;
    else if (age < 30)
        value = 60;
    else if (age < 46)
        value = 120;
    else if (age < 60)
        value = 150;
    else if (age < 66)
        value = 250;
    else
        value = 400;

    printf("Value: $%i", value);

    return 0;
}