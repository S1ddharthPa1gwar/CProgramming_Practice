#include <stdio.h>

int main()
{
    int num[50];
    FILE *ptr;
    ptr = fopen("Generated.txt", "w");
    fprintf(ptr,"This is sample file created by Siddharth.");
    fclose(ptr);
    
    return 0;
}