#include <stdio.h>

int main()
{
    int seconds;
    float hours;
    printf("Enter seconds: ");
    scanf("%i", &seconds);
    if (seconds >= 0)
    {
        hours = seconds / 3600.0;
        printf("Hours: %.1f\n", hours);
    }
    else
    {
        printf("Seconds can't be less than zero'\n");
    }
    return 0;
}