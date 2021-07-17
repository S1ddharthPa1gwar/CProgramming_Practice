#include <stdio.h>

typedef struct date
{
    int date;
    int month;
    int year;
} date;

void display(date d)
{
    printf("The date is %d/%d/%d \n", d.date, d.month, d.year);
}

int comp(date d1, date d2)
{
    if (d1.year > d2.year)
        return 1;
    if (d1.year < d2.year)
        return -1;

    if (d1.month > d2.month)
        return 1;
    if (d1.month < d2.month)
        return -1;

    if (d1.date > d2.date)
        return 1;
    if (d1.date < d2.date)
        return -1;
    return 0;
}

int main()
{

    date d1 = {15, 06, 1997};
    date d2 = {06, 01, 1994};
    display(d1);
    display(d2);
    int i = comp(d1, d2);
    if (i == -1)
        printf("date 1 is before date 2");
    if (i == 1)
        printf("date 1 is after date 2");
    else
        printf("Both dates are same");

    return 0;
}