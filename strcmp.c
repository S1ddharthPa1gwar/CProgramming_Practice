#include <stdio.h>
#include <string.h>

int main()
{
    char str[15] = "hel";
    char ptr[15]="helo";
    int val= strcmp(str, ptr);
    printf("the value is %d\n",val);
    return 0;
}