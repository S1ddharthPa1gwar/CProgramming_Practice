#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[20];
} emp;

//void show(struct employee Emp)
void show(emp Emp)
{
    printf("The code is : %d \nThe salary is : %f \nThe name is : %s ", Emp.code, Emp.salary, Emp.name);
}

int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;

    //Giving values to e1 attributes
    // (*ptr).code = 101;
    ptr->code = 102;
    ptr->salary = 153.5;
    strcpy(ptr->name, "Siddy");
    show(e1);
    //  printf("%d", e1 .code);
    //printf("The code is : %d \nThe salary is : %f \nThe name is : %s ",e1.code, e1.salary, e1.name);

    return 0;
}