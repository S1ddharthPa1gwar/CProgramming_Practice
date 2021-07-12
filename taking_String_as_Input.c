#include <stdio.h>

int main()
{
    char st1[20];
    char st2[20];
    char c;
    int i = 0;

    printf("Enter your first string : ");
    scanf("%s", st1);

    printf("Enter the second string character by character : ");
    while (c != '\n');
    {
        fflush(stdin);
        scanf("%c", &c);
        st2[i] = c;
        i++;
    }
    st2[i] = '\0';
    printf("%s \n", st1);
    printf("%s", st2);

    return 0;
}