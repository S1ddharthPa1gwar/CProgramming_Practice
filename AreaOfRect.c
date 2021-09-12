#include <stdio.h>

int main()
{
double l,b;
printf("Enter length in cms : ");
scanf("%lf", &l);
printf("Enter breadth in cms : ");
scanf("%lf", &b);
printf("The area of rectangle with length %.2f and breadth %.2f is %.3f sq.cm. ",l,b,l*b);
    return 0;
}