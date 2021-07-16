#include <stdio.h>
#include <string.h>

struct Emp{
char name[20];
int code;
float salary;
};


int main()
{
    struct Emp e1, e2,e3;
    e1.code= 001;
    e1.salary = 12.5;
    strcpy(e1.name ,"Siddharth");

    e2.code= 002;
    e2.salary = 15;
    strcpy(e2.name ,"Saumya");

    e3.code= 003;
    e3.salary = 28;
    strcpy(e3.name ,"Ram");

printf("%d %f %s \n",e1.code, e1.salary, e1.name );
printf("%d %f %s \n",e2.code, e2.salary, e2.name );
printf("%d %f %s \n",e3.code, e3.salary, e3.name );

    return 0;
}