#include <stdio.h>

void PrintArray(int *ptr, int size);

int main()
{
int marks[]={45,85,23,15,65,32};
PrintArray(marks,6);    //we are passing address, it can change values in actual array.
    return 0;
}

// void PrintArray(int *ptr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("The value of %d elements is %d\n", i + 1, *(ptr + i));
//     }
// }

void PrintArray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("The value of %d elements is %d\n", i + 1, ptr[i]);
    }
}