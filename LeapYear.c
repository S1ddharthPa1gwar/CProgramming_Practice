#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    if ((year % 100 == 0 && year % 400 == 0 && year % 4 == 0) || (year % 100 != 0 && year % 4 == 0))
    {
        printf("it is leap year. \n");
    }
    else
    {
        printf("it is not a leap year. \n");
    }

    return 0;
}