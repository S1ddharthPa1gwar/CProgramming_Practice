#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);
    if (ch > 96 &&ch < 123)
    {
        printf("Enter character is small case character.\n");
    }
    else
    {
        printf("Enter character is NOT a small case character.\n");
     }

    return 0;
}