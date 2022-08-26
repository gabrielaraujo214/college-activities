#include <stdio.h>

int main()
{
    int cars;
    printf("Enter amount of cars sold: ") /
        scanf("%i", &cars);
    int total = 350 + (cars * 200);
    printf("Total: $%i\n", total);
    return 0;
}