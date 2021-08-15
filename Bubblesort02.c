#include <stdio.h>

void swap(int *p1,int  *p2)
{
int temp = *p1;
*p1 = *p2;
*p2 = temp;
}

void Bubblesort(int Arr[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
            if (Arr[j] > Arr[j + 1])
                swap(&Arr[j], &Arr[j + 1]);
    }
}



int main()
{
    int Arr[] = {1, 5, 7, 9, 12, 84, 7, 6, 684, 1, 15, 648, 3, 478, 51, 68};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    int i,j;
    Bubblesort(Arr, size);
    // for (i = 0; i < size - 1; i++)
    // {
    //     for (j = 0; j < size - i - 1; j++)
    //         if (Arr[j] > Arr[j + 1])
    //         {
    //             int temp = Arr[j];
    //             Arr[j] = Arr[j + 1];
    //             Arr[j] = temp;
    //         }
    // }
    for (i = 0; i < size; i++)
    {
        printf("%d ,", Arr[i]);
    }

    return 0;
}
