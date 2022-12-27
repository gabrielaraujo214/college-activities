// Write a program that reads three integer values corresponding to the day, month and year of a date, indicating the number of days that have passed in that year and the number of days remaining in the year. Example for 01/15/2003 we have elapsed days = 15 and remaining days = 350. The program must consider that some years are leap years!

#include <stdio.h>
#include <locale.h>

int main()
{
    int day, month, year, total_days, actual_days, difference, days_month, days_feb;

    printf("Enter day: ");
    scanf("%i", &day);

    printf("Enter month: ");
    scanf("%i", &month);

    printf("Enter year: ");
    scanf("%i", &year);

    total_days = 365;
    days_feb = 28;

    if ((year % 4 == 0 && year % 100 == 0) || year % 400 == 0)
    {
        total_days = 366;
        days_feb = 29;
    }

    if (month == 1)
        days_month = 0;
    else if (month == 2)
        days_month = 31;
    else if (month == 3)
        days_month = 31 + days_feb;
    else if (month == 4)
        days_month = 31 + days_feb + 31;
    else if (month == 5)
        days_month = 31 + days_feb + 31 + 30;
    else if (month == 6)
        days_month = 31 + days_feb + 31 + 30 + 31;
    else if (month == 7)
        days_month = 31 + days_feb + 31 + 30 + 31 + 30;
    else if (month == 8)
        days_month = 31 + days_feb + 31 + 30 + 31 + 30 + 31;
    else if (month == 9)
        days_month = 31 + days_feb + 31 + 30 + 31 + 30 + 31 + 31;
    else if (month == 10)
        days_month = 31 + days_feb + 31 + 30 + 31 + 30 + 31 + 31 + 30;
    else if (month == 11)
        days_month = 31 + days_feb + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
    else if (month == 12)
        days_month = 31 + days_feb + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;

    return 0;
}