// I won't be getting rich just by writing code.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("The size of int on my system is %d\n", sizeof(int));
    printf("The size of float on my system is %d\n", sizeof(float));
    printf("The size of char on my system is %d\n", sizeof(char));
    // printf("The size of boolean on my system is %d", sizeof(boolean));

    int *ptr;
    ptr = (int *)malloc(6 * sizeof(int));
    printf("%u\n", ptr);

    // for (int i = 0; i < 6; i++)
    // {
    //     printf("Enter the value of %d element :", i + 1);
    //     scanf("%d", &ptr[i]);
    // }

    for (int i = 0; i < 6; i++)
    {
        printf("the value of %d element is  : %d\n", i + 1, ptr[i]);
    }
    return 0;
}