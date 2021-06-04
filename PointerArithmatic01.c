#include<stdio.h>

int main() {
int i=1;
int *ptr=&i;
printf("The value of ptr is %u.\n",ptr);
ptr++;  //int is 4B.
printf("The value of ptr is %u.\n",ptr);

return 0;
}