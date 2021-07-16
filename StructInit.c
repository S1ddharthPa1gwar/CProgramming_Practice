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
    struct Emp Google={001,15.8,"Siddharth"};

    printf("%d %f %s \n", Google.code, Google.salary, Google.name);
    // printf("%d %f %s \n", Google[1].code, Google[1].salary, Google[1].name);
    // printf("%d %f %s \n", Google[2].code, Google[2].salary, Google[2].name);

    return 0;
}