#include <stdio.h>

int main()
{
    FILE *ptr;
    char c;
    ptr = fopen("Generatedfile.txt", "r");
    c = fgetc(ptr);     // get the first character of file
    while (c != EOF)    //End Of FIle
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    return 0;
}