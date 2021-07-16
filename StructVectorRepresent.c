#include <stdio.h>

typedef struct vector{
    int x;
    int y;
} Vec;

int main()
{
    Vec v1,v2;
    v1.x=10;
    v1.y=15;


    v2.x=100;
    v2.y=150;
    printf("X dim is %d and y dim is %d.\n",v1.x, v1.y);
    printf("X dim is %d and y dim is %d.",v2.x, v2.y);
 
    return 0;
}