#include <stdio.h>

int main()
{
    float dollar, real, dollar_to_real;
    printf("Enter dollar value:");
    scanf("%f", &dollar);
    printf("Enter real amount:");
    scanf("%f", &real);
    dollar_to_real = real * dollar;
    printf("Amount in dollars: %.2f\n", dollar_to_real);
    return 0;
}
