#include <stdio.h>

void printArray(int Arr[], int size){       //Printing Array
    for (int i = 0; i < size; i++)    {
        printf("%d ", Arr[i]);
    }
    printf("\n");
}

void reverseArray(int Arr[],int start,int end){     //Reversing Array
    int temp;
    if(start>=end){
        return; 
    }
        temp = Arr[start];
        Arr[start]= Arr[end];
        Arr[end]=temp;
        reverseArray(Arr,start+1,end-1);
    }


int main(){
    int Arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
    int size = sizeof(Arr) / sizeof(Arr[0]);
    printArray(Arr, size);
    reverseArray(Arr, 0, size-1);
    printf("The reversed array is : \n");
    printArray(Arr, size);
    return 0;
}