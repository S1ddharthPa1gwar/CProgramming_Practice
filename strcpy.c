#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Siddharth Paigwar";
    char ptr[50];
    strcpy(ptr,str);
    printf("the value in ptr is %s\n",ptr);
    return 0;
}