#include <stdio.h>
#include <string.h>

int main()
{
    char str[15] = "Siddharth ";
    char ptr[15]="Paigwar";
    strcat(str, ptr);
    printf("the value in ptr is %s\n",str);
    return 0;
}