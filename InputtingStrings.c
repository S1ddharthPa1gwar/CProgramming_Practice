#include<stdio.h>

int main() {
char school[30];
printf("Enter your school name : ");
scanf("%s",school); //%s need not required address, since it already contains address of first element.
printf("%s\n", school);

return 0;
}