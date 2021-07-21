#include <stdio.h>

int main()
{
    int num[50];
    FILE *ptr;
    ptr = fopen("FileRead.txt", "r");
    if (ptr == NULL)
    {
        printf("This file does not exist.");
    }
    else
    {
        fscanf(ptr, "%d", &num[0]);
        fscanf(ptr, "%d", &num[1]);
        fscanf(ptr, "%d", &num[2]);
        fclose(ptr);
        printf("number is %d\n", num[0]);
        printf("number is %d\n", num[1]);
        printf("number is %d\n", num[2]);
    }
    return 0;
}