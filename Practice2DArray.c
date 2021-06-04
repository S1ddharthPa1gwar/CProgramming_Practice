#include <stdio.h>

void Display(int *ptr, int x, int y);

int main()
{
    int Matrix[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter the value for %d %d element", i + 1, j + 1);
            scanf("%d", &Matrix[i][j]);
        }
    }

    int *pointer = &Matrix;
    Display(pointer, 3, 4);
    return 0;
}

void Display(int *ptr, int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            printf("%d", *ptr[i][j]);
        }
        printf("\n");
    }
}