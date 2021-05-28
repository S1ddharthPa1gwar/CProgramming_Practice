#include <stdio.h>

int sum(int num);

int main()
{
    int number;
    printf("Enter the term till sum is to be calculate : ");
    scanf("%d", &number);
    printf("The sum of irst %d natural numbers is %d", number, sum(number));

    return 0;
}

int sum(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num + sum(num - 1);
    }
}