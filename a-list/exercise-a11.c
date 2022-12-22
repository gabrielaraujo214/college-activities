// Create a program that is able to read a value in reais and transform this value into dollars. The conversion rate should not be fixed, it should be informed by the program user.

#include <stdio.h>

int main()
{
    float dollar, real, real_to_dollar;

    printf("Enter dollar value:");
    scanf("%f", &dollar);

    printf("Enter real amount:");
    scanf("%f", &real);

    real_to_dollar = real * dollar;

    printf("Amount in dollars: %.2f\n", real_to_dollar);

    return 0;
}
