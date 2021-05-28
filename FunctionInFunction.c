#include <stdio.h>

void gm();
void ga();
void ge();

int main()
{
    gm();

    return 0;
}

void gm()
{
    printf("Good Morning\n");
    ga();
}

void ga()
{
    printf("Good Afternoon \n");
    ge();
}
void ge()
{
    printf("Good Evenning \n");
}
