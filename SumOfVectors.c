#include <stdio.h>

typedef struct vectortor
{
    int x;
    int y;
} vector;

vector Sumvector(vector u, vector v)
{
    vector result;
    result.x = u.x + v.x;
    result.y = u.y + v.y;
    return result;
}

int main()
{
    vector v1, v2;
    v1.x = 10;
    v1.y = 15;

    v2.x = 100;
    v2.y = 150;
    printf("X dim is %d and y dim is %d.\n", v1.x, v1.y);
    printf("X dim is %d and y dim is %d.\n", v2.x, v2.y);
    vector sum = Sumvector(v1, v2);
    printf("The resultant vectortor in x dim is %d and in Y dim is %d", sum.x, sum.y);
    return 0;
}