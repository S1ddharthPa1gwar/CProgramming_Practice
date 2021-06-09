#include <stdio.h>
#include <string.h>

int main()
{
    char *str = "Siddharth Paigwar";
    printf("The length of string is %d\n", strlen(str));
    //strlen() excludes null charater.
    return 0;
}