#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("%d\n", i);
        if (i == 10)
        {
            break;
        }
        i++;
    }while(i<100);
    return 0;
}