#include <stdio.h>

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void SelectionSort(int Arr[], int size)
{
    int min, i, j;
    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i+1; j < size ; j++)
        {
            if (Arr[j] < Arr[min])
                min = j;
                 swap(&Arr[min], &Arr[i]);
    }
        }
       
}

void PrintArray(int Arr[], int ArrSize)
{ // Defination
    for (int i = 0; i < ArrSize; i++)
    {
        printf("%d, ", Arr[i]);
    }
}

int main()
{
    int Arr[] = {1, 68, 1, 654, 9, 31, 684, 65, 32, 1, 6, 5, 64, 943, 516, 84};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    SelectionSort(Arr, size);
    PrintArray(Arr, size);
    return 0;
}