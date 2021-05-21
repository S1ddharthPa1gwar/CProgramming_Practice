#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if (age >= 18 && age <= 70)
    {
        printf("YOu're eligible to drive.\n");
    }
    else
    { 
        printf("You are not eligible to drive.\n");
    }
    return 0;
}