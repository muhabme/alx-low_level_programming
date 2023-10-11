#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check for leap year and update February's days
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        daysInMonth[2] = 29; // February has 29 days in a leap year
    }

    // Validate month and day input
    if (month < 1 || month > 12 || day < 1 || day > daysInMonth[month])
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    int totalDays = 0;
    for (int i = 1; i < month; i++)
    {
        totalDays += daysInMonth[i];
    }
    totalDays += day;

    // Check if it's a leap year and the date is after February 29
    if (daysInMonth[2] == 29 && month > 2)
    {
        totalDays--;
    }

    printf("Day of the year: %d\n", totalDays);
    if (daysInMonth[2] == 29) // Leap year
    {
        printf("Remaining days: %d\n", 366 - totalDays);
    }
    else
    {
        printf("Remaining days: %d\n", 365 - totalDays);
    }
}
