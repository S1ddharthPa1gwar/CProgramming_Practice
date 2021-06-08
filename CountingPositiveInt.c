#include <stdio.h>


int count(int *array, int size);

int main()
{
    int Arr[] = {1, -2, -3, 4, -5, 6, 7, -8, 9, 10};
    printf("The total positive intigers in the array is %d. \n",count(Arr, 10) );
    return 0;
}

int count(int *array, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] >0)
        {
            count++;
        }
    }
    return count;
}