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

    struct Emp facebook[100];
    struct Emp *ptr = facebook;
    facebook[0] = {101, 15.2, "Siddharth"};
    facebook[1] = {102, 15.4, "Tiddharth"};
    facebook[2] = {103, 15.6, "Uiddharth"};
    facebook[3] = {104, 15.8, "Viddharth"};
    facebook[4] = {105, 16.0, "Widdharth"};

    printf("%d %f %s \n", facebook[0].code, facebook[0].salary, facebook[0].name);
    printf("%d %f %s \n", facebook[1].code, facebook[1].salary, facebook[1].name);
    printf("%d %f %s \n", facebook[2].code, facebook[2].salary, facebook[2].name);
    printf("%d %f %s \n", facebook[3].code, facebook[3].salary, facebook[3].name);
    printf("%d %f %s \n", facebook[4].code, facebook[4].salary, facebook[4].name);
  

    return 0;
}