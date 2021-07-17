#include <stdio.h>

typedef struct vectortor
{
    int x;
    int y;
} vector;

void Display(vector comp)
{
    printf("The value of vector in X dim is %d \n", comp.x);
    printf("The value of vector in Y dim is %d\n", comp.y);
    printf("\n ***********************************************\n");
}

int main()
{
    vector v[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Provide X and Y dim of %d vector : \n", i + 1);
        scanf("%d %d", &v[i].x, &v[i].y);
    }

    for (int i = 0; i < 5; i++)
    {
        Display(v[i]);
    }
}