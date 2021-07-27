// I won't be getting rich just by writing code.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int *)calloc(6,sizeof(int));     //calloc takes 2 argumrnts calloc(6,sizeof(int))
    printf("%u\n", ptr);

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d element :", i + 1);
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr,10*sizeof(int));
  for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d element :", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("the value of %d element is  : %d\n", i + 1, ptr[i]);
    }
    return 0;
}