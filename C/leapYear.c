#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int year = get_int("Input a year: ");
    if(year % 4 > 0 || (year % 100 == 0 && year % 400 > 0))
    {
        printf("%i is not a leap year\n", year);
    }
    else
    {
        printf("%i is a leap year\n", year);
    }
}