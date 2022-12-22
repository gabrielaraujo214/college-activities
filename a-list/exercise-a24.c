// The Docinho de Coco bakery sells a certain amount of French bread and a amount of cornbread each day. Each bun costs R$ 0.12 and the cornbread costs R$ 1.50. At end of the day, the owner wants to know how much he collected from the sale of bread and cornbread (together), and how much must keep in a savings account (10% of the total collected). You were hired to do the calculations for the owner. Based on these facts, make a program to read the amounts of bread and cornbread, and then calculate the requested data.

#include <stdio.h>

int main()
{
    int bread, cornbread;
    float total, savings;

    printf("Enter amount of bread: ");
    scanf("%i", &bread);

    printf("Enter amount of cornbread: ");
    scanf("%i", &cornbread);

    total = bread * 0.12 + cornbread * 1.5;

    savings = total * 0.10;

    printf("Total: %.2f\n", total);

    printf("Savings: %.2f\n", savings);

    return 0;
}