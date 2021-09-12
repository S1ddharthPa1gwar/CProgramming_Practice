#include <stdio.h>

void Swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//  Applying bubble sort
void Sort(int Arr[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - 1 - i; j++)
            if (Arr[j] > Arr[j + 1])
                Swap(&Arr[j], &Arr[j + 1]);
}

int main()
{
    int Arr[] = {5, 3, 9, 7, 12, 645, 1618, 25, 26, 2, 83, 53, 94, 54, 294, 785, 425, 6, 86, 55};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    int i;
    int x = 87; //Number to find
    //Sorting
    // Sort(Arr, size);
    //Searching
    i = 0;
    while (Arr[i] != x)
    {
        i++;
    }
    ((i < size && Arr[i] ==x) ? printf("%d was found at %d", x, i + 1) : printf("%d does not found!!", x));

    return 0;
}