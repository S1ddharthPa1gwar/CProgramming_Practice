#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp)
{
    printf("The code is : %d \nThe salary is : %f \nThe name is : %s ", emp.code, emp.salary, emp.name);
}

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    // (*ptr).code = 101;
    ptr->code = 102;
    ptr->salary = 153.5;
    strcpy(ptr->name, "Siddy"); 
    show(e1);
    //  printf("%d", e1 .code);

    return 0;
}