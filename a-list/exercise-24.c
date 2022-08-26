#include <stdio.h>

int main()
{
    int bread, cornbread;
    printf("Enter amount of bread: ");
    scanf("%i", &bread);
    printf("Enter amount of cornbread: ");
    scanf("%i", &cornbread);
    float total = bread * 0.12 + cornbread * 1.5;
    float savings = total * 0.10;
    printf("Total: %.2f\n", total);
    printf("Savings: %.2f\n", savings);
    return 0;
}