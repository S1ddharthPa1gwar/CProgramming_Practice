#include <stdio.h>

int main()
{
char name1[20];
char name2[20];
int sal1,sal2;
printf("Enter Name of first employee : ");
gets(name1);
printf("Enter salary of %s", name1);
scanf("%d", sal1);

printf("Enter Name of first employee : ");
gets(name1);
printf("Enter salary of %s", name2);
scanf("%d", sal1);

printf("%s : %d", name1, sal1);
printf("%s : %d", name2, sal2);
    return 0;
}