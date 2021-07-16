#include <stdio.h>
#include <string.h>

struct Emp
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct Emp facebook;
    struct Emp *ptr;
    ptr = &facebook;
    // (*ptr).code = 101;
    ptr->code =102;
    printf("%d", facebook.code);

    return 0;
}