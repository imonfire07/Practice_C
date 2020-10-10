//Leap Year
#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year to check::");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("The year %d is a LEAP YEAR!!", year);
    }
    else if (year % 100 == 0)
    {
        printf("The year %d is NOT LEAP YEAR!!", year);
    }
    else if (year % 4 == 0)
    {
        printf("The year %d is a LEAP YEAR!!", year);
    }
    else
    {
        printf("The year %d is NOT LEAP YEAR!!", year);
    }

    return 0;
}