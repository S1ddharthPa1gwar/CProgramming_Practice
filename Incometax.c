#include <stdio.h>

int main()
{
    float Salary,tax;
    printf("Enter your Salary : ");
    scanf("%f", &Salary);
    if (Salary < 250000)
    {
        printf("You don't have to pay any tax.");
    }
    if (Salary >= 250000 && Salary < 500000)
    {
        tax += 0.05*(Salary-250000);
        printf("Your total tax amount is %f",tax);
    }
    if (Salary >= 500000 && Salary < 1000000)
    {
        tax += 0.2*(Salary-500000);
        printf("Your total tax amount is %f", tax);
    }
    if (Salary >= 1000000)
    {
        tax += 0.3*(Salary-1000000);
        printf("Your total tax amount is %f", tax);
    }
return 0;
}