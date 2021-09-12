#include <stdio.h>

int main()
{
    double num1, num2, num3;
    printf("Enter first number : ");
    scanf("%lf", &num1);
    printf("Enter first number : ");
    scanf("%lf", &num2);
    printf("Enter first number : ");
    scanf("%lf", &num3);
    double avg = (num1 + num2 + num3) / 3;
    printf("The average of %.2f,%.2f, %.2f is %.3f", num1, num2, num3, avg);
    return 0;
}