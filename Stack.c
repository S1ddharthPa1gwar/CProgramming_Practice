#include <stdio.h>

int isfull(int top)
{
    if (top == 9)
        return 1;
    else
        return 0;
}

int isempty(int top)
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int main()
{
    int Arr[10];
    int top = -1;
    int n, num;
    printf("What do you want to perform? \n Enter 1 for push. \n Enter 0 for pop.\n");
    scanf("%d", &n);

    if (n == 1)
    {
        int result = isfull(top);
        if (result == 1)
            printf("Stack overflow!!");
        else
        printf("Enter the number : ");
        scanf("%d", &num);
            top++;
        Arr[top] = num;
    }

    if (n == 0)
    {
        int result = isempty(top);
        if (result == 1)
            printf("Stack underflow!!");
        else
            printf("%d", Arr[top]);
        top--;
    }

    return 0;
}
