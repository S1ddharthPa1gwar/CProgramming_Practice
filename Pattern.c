#include <stdio.h>

void pattern(int num);

int main()
{
    int n;
    printf("Enter the  umber of lines: ");
    scanf("%d", &n);
    pattern(n);

    return 0;
}

void pattern(int num)
{
    if (num == 1)
    {
        printf("*\n");
        return;
    }
    pattern(num - 1);
    for (int i = 0; i < (2*num-1); i++)
    {
        printf("*");
    }
     printf("\n");
    return;
}