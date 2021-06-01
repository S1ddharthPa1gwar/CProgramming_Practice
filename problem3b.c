#include <stdio.h>

int fun(int *a);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    fun(&num);
    printf("The value is %d \n", num);

    return 0;
}

int fun(int *a)
{
    *a = *a*10;
    return 0;
}