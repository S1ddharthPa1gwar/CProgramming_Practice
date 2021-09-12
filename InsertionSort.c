#include <stdio.h>

void Swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void Sort(int Arr[], int size)
{
    int i, j, key;
    for (i = 1; i < size; i++)
    {
        key = Arr[i];
        j = i - 1;
        while (Arr[j] < key && j >= 0)
        {
            Arr[j + 1] = Arr[j];
            j--;
        }
        Arr[j + 1] = key;
    }
}

int main()
{
    int Arr[] = {1, 6, 7, 3, 5, 12, 16, 14, 18, 35, 48, 95, 15, 468, 15, 84, 641};
    int ArrSize = sizeof(Arr) / sizeof(Arr[0]);
    Sort(Arr, ArrSize);
    for (int i = ArrSize-1; i > -1; i--)
    {
        printf("%d ,", Arr[i]);
    }

    return 0;
}