#include <stdio.h>
// void BubbleSort(int Arr[],int ArrSize); //Prototype
// void PrintArray(int Arr[],int ArrSize); //Prototype
// void swap(int *p1,int *p2);

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void BubbleSort(int Arr[], int ArrSize) // Defination
{
    int i, j;
    for (i = 0; i < ArrSize - 1; i++)
    {
        for (j = 0; j < ArrSize - i - 1; j++)
            if (Arr[j] > Arr[j + 1])
                swap(&Arr[j], &Arr[j + 1]);
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
    int Arr[] = {1, 6, 7, 3, 5, 12, 16, 14, 18, 35, 48, 95, 15, 468, 15, 84, 641};
    int ArrSize = sizeof(Arr) / sizeof(Arr[0]);
    // printf("%d", ArrSize);  // checking Arr Size
    BubbleSort(Arr, ArrSize);
    printf("Sorted Array : \n");
    PrintArray(Arr, ArrSize);

    return 0;
}
