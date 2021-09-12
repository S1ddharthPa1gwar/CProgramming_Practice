#include <stdio.h>

void printArray(int *Arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n");
}

void Min_Max(int *Arr, int size)
{
    int min = Arr[0];
    int max = Arr[0];

    if (size < 1)
    {
        printf("Array empty!! \n");
    }
    else
    {
        min = Arr[0];
        max = Arr[0];
        for (int i = 0; i < size; i++)
        {
            if (Arr[i] > max)
            {
                max = Arr[i];
            }
            if (Arr[i] < min)
            {
                min = Arr[i];
            }
        }
        printf("The max is : %d \n", max);
        printf("The min is : %d \n", min);
    }
}

int main()
{
    int Arr[] = {8,6,5,2,3,9,1,7,4};
    int size = 9;
    printArray(Arr, size);
    Min_Max(Arr, size);
    return 0;
}