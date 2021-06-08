#include <stdio.h>

void reverse(int *array, int size);

int main()
{
    int Arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    reverse(Arr, 10);
  for (int i = 0; i < 10; i++)
    {
        printf("%d\n", Arr[i]);
    }
    return 0;
}

void reverse(int *array, int size)
{
    int temp;
    for (int i = 0; i < size/2; i++)
    {
        temp = array[i];
        array[i] = array[size - (i+1)];
        array[size - (i+1)] = temp;
    }

  
}

// void reverse(int *array, int size)
// {
//     int temp;
//     int A[size];
//     for (int i = 0; i < size; i++)
//     {
//         A[i] = array[size-1];
//     }

//     for (int i = 0; i < size; i++)
//     {
//         printf("%d\n", A[i]);
//     }
// }