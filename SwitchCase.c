#include <stdio.h>

int main()
{
    int num;
    printf("give your rating from 1 to 5 :");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        printf("You gave 1 star rating!\n");
        break;
    case 2:
        printf("You gave 2 star rating!\n");
        break;
    case 3:
        printf("You gave 3 star rating!\n");
        break;
    case 4:
        printf("You gave 4 star rating!\n");
        break;
    case 5:
        printf("You gave 5 star rating!\n");
        break;
    default:
        printf("Invalid rating!\n");
    }

    return 0;
}