#include <stdio.h>

void printTable(int *arr, int Tableof, int size);

int main()
{
    int table[3][10];
    printTable(table[0], 2,10 );
    printTable(table[1], 7,10 );
    printTable(table[2], 9,10 );
        return 0;
}
 
void printTable(int *arr, int Tableof, int size)
{  
    printf("The table of %d is :\n",Tableof);
    for (int i=0;i<size;i++){
        arr[i]=Tableof*(i+1);
    }
    
    for (int i=0;i<size;i++){
        printf("%dx%d=%d\n",Tableof,i+1,arr[i]);
    }
    printf("*************************************************************************\n\n");
}