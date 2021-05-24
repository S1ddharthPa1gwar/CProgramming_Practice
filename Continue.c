#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        if (i == 10)
        {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    } while (i <= 20);

    return 0;
}