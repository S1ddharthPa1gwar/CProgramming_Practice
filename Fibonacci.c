#include <stdio.h>

int fib(int num);

int main()
{
    int num;
    printf("Enter the term to find its value: ");
    scanf("%d", &num);
    printf("the %d term of fibonacci series is %d \n", num, fib(num));

    return 0;
}

int fib(int number)
{
    if (number == 1)
    {
        return 1;
    }
    else if (number == 0)
    {
        return 0;
    }
    else
    {
        return fib(number - 1) + fib(number - 2);
    }
}