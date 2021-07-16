#include <stdio.h>

typedef struct vector
{
    int x;
    int y;
} Vec;

void SumVec(Vec u, Vec v)
{
    int x = u.x + v.x;
    int y = u.y + v.y;
    printf("The sum of two vectors in X dim is %d and in Y dim is %d",x,y);
}

int main()
{
    Vec v1, v2;
    v1.x = 10;
    v1.y = 15;

    v2.x = 100;
    v2.y = 150;
    printf("X dim is %d and y dim is %d.\n", v1.x, v1.y);
    printf("X dim is %d and y dim is %d.\n", v2.x, v2.y);
    SumVec(v1, v2);
     return 0;
}