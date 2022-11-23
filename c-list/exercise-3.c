#include <stdio.h>

int main()
{
    float number, result;
    char answer;
    do
    {
        do
        {
            printf("Enter number from 0 to 10: ");
            scanf("%f", &number);
            getchar();
        } while (number < 1 || number > 10);
        int multiplier = 1;
        while (multiplier <= 10)
        {
            result = number * multiplier;
            printf("%f * %i = %f\n", number, multiplier, result);
            multiplier++;
        }
        printf("Do you want to quit? ");
        scanf("%c", &answer);
    } while (answer != 'y' && answer != 'Y');
    return 0;
}