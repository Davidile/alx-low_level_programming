#include<stdio.h>
#include "main.h"

/**
 * print_remaining_days -takes a date and prints how many days are 
 * left i the year , taking leap years into account 
 * @month: month in anumber format
 * @day: day of month
 * @year: tear.
 * Return: void
 */
void print_remaining_days( int month, int day, int year)
{
	if (year % 4 == 0 || ((year % 100 == 0) && (year % 400 ==0)))
	{
		if (month > 2 && day >= 60)
			day++;
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
	if (month == 2 && day ==60)
	{
	printf("Invalid date:%02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
	printf("Day of thee year: %d\n", day);
        printf("Remaining days: %d\n", 365-day);
	}
	}
}
