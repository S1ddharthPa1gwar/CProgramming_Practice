#include <stdio.h>
#include <string.h>

int strln(char *s);

int main()
{
    char s[30];

    printf("Enter your string : ");
    scanf("%s", s);
    int count=  strln(s);
    printf("Length of string is %d", count);
    return 0;
}

int strln(char *s)
{
        int count = 0;
    char *ptr =s;
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    return count;
}