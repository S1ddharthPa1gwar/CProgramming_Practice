#include<stdio.h>

int main() {
int a=1001;
int *ptr = &a;
printf("The address of variable a is %u\n",&a);
printf("The value at address %u is %d\n",&a,*ptr);

return 0;
}