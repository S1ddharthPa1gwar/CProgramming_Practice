#include <stdio.h>
#include <string.h>

// void show(struct emp);
void show(struct employee emp)
{
    printf("%d is the code \n %s is the name. \n*********\n", emp.code, emp.name);
}

struct employee
{
    int code;
    char name[20];
};

int main()
{
    struct employee e1 = {102, "Siddharth"};
    struct employee e2 = {105, "Tiddharth"};
    struct employee *ptr1;
    ptr1 = &e1;
    struct employee *ptr2;
    ptr2 = &e2;
    show(e1);
    show(e2);
    return 0;
}
