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
    struct Emp Google[1000];
    Google[0].code = 01;
    Google[0].salary = 1000;
    strcpy(Google[0].name, "Siddharth");

    Google[1].code = 02;
    Google[1].salary = 980;
    strcpy(Google[1].name, "Siddhesh");

    Google[2].code = 03;
    Google[2].salary = 950;
    strcpy(Google[2].name, "Siddhanth");

    printf("%d %f %s \n", Google[0].code, Google[0].salary, Google[0].name);
    printf("%d %f %s \n", Google[1].code, Google[1].salary, Google[1].name);
    printf("%d %f %s \n", Google[2].code, Google[2].salary, Google[2].name);

    return 0;
}