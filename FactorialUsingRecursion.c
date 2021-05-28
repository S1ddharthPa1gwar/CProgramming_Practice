#include <stdio.h>

int fact(int number);

int main()
{
    int num, result;
    printf("Enter the number to find factorial of : ");
    scanf("%d", &num);
    //result= fact(num);
    printf("Factorial on %d is %d.\n", num, fact(num));

    return 0;
}

int fact(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return number * fact(number - 1);
    }
}