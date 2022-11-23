#include <stdio.h>

int main()
{
    int counter = 0;
    float n, greater = 0;
    while (counter < 10)
    {
        printf("Enter a number (%i / 10): ", counter + 1);
        scanf("%f", &n);
        if (n > greater || counter == 0)
            greater = n;
        counter++;
    }
    printf("Greatest number: %f", greater);
    return 0;
}