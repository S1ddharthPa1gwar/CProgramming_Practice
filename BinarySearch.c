#include <stdio.h>

int search(int Arr[], int x, int low, int high)
{

    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (Arr[mid] == x)
            return mid;
         if (Arr[mid] > x)
        {
            high = mid - 1;
           return search(Arr, x, low, high);
        }
        if (Arr[mid] < x)
        {
            low = mid + 1;
            return search(Arr, x, low, high);
        }
        return -1;
    }
}


int main()
{
    int Arr[] = {2 ,3 ,5 ,6 ,7 ,9 ,12 ,25 ,26 ,53 ,54 ,55 ,83 ,86 ,94 ,294 ,425 ,645 ,785 ,1618};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    int low, mid, high;
    int x = 12; //Number to find
    low = 0;
    high = size;
    int index = search(Arr, x, 0, size-1);
   (index == -1? printf("Element not found!"): printf("The given element was found at %d position", index+1));
    return 0;
}