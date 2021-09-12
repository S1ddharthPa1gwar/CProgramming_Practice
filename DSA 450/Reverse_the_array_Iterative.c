#include <stdio.h>

void print(int Arr[], int size)      //Printing Array
{
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", Arr[i]);
    }
    printf("\n\n");
}

void reverse(int A[], int size)      //Reversing Array
{
    for (int i = 0; i < size / 2; i++)
    {
        int temp = A[i];
        A[i] = A[size-(i+1)];
        A[size-(i+1)] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", A[i]);
    }
    printf("\n");
}

int main()      //Main Thread
{
    int Arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    print(Arr, size);
    reverse(Arr, size);

    return 0;
}