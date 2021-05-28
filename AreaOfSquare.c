#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int length;
    printf("Enter the length in cms : ");
    scanf("%d", &length);
    printf("Area of square is %f.", pow(length, 2));

    return 0;
}