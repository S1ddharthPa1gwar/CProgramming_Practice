#include <stdio.h>

int fun(int *a);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int numm = fun(&num);
    printf("The 10 times value of %d is %d\n", num, numm);

    return 0;
}

int fun(int *a)
{
    return *a * 10;
}